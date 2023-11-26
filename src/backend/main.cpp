#include <httplib.h>
#include <nlohmann/json.hpp>
#include "cpu.hpp"
#include "gpu.hpp"
#include "motherboard.hpp"
#include "psu.hpp"
#include "ram.hpp"
#include "storage.hpp"
#include "case.hpp"
#include "cooler.hpp"

using json = nlohmann::json;
using namespace httplib;

int main() {
    Server svr;

    // Endpoint for CPU
    svr.Get("/api/cpu", [](const Request& req, Response& res) {
        CPUList myCPU;
        auto CPUArray = myCPU.getCPUList();
        json j;
        j["cpus"] = CPUArray;
        res.set_content(j.dump(), "application/json");
    });
        svr.Get("/api/gpu", [](const Request& req, Response& res) {
        GPUList myGPU;
        auto GPUArray = myGPU.getGPUList();
        json j;
        j["gpus"] = GPUArray;
        res.set_content(j.dump(), "application/json");
    });
        svr.Get("/api/motherboard", [](const Request& req, Response& res) {
        MotherboardList myMotherboard;
        auto MotherboardArray = myMotherboard.getMotherboardList();
        json j;
        j["motherboards"] = MotherboardArray;
        res.set_content(j.dump(), "application/json");
    });
        svr.Get("/api/ram", [](const Request& req, Response& res) {
        RAMList mRAM;
        auto RAMArray = myRAM.getRAMList();
        json j;
        j["rams"] = RAMArray;
        res.set_content(j.dump(), "application/json");
    });
        svr.Get("/api/case", [](const Request& req, Response& res) {
        CaseList myCase;
        auto CaseArray = myCase.getCaseList();
        json j;
        j["cases"] = CaseArray;
        res.set_content(j.dump(), "application/json");
    });
        svr.Get("/api/storage", [](const Request& req, Response& res) {
        StorageList myStorage;
        auto StorageArray = myStorage.getStorageList();
        json j;
        j["storages"] = StorageArray;
        res.set_content(j.dump(), "application/json");
    });
        svr.Get("/api/cooler", [](const Request& req, Response& res) {
        CoolerList myCooler;
        auto CoolerArray = myCooler.getCoolerList();
        json j;
        j["coolers"] = CoolerArray;
        res.set_content(j.dump(), "application/json");
    });
        svr.Get("/api/powersupply", [](const Request& req, Response& res) {
        PowersupplyList myPowersupply;
        auto PowersupplyArray = myPowersupply.getPowersupplyList();
        json j;
        j["powersupplys"] = PowersupplyArray;
        res.set_content(j.dump(), "application/json");
    });

    svr.listen("localhost", 8080);
}
