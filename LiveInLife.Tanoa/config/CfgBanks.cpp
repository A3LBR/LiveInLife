
class CfgBanks {
    class tanBank {
        displayName = "Banco de Tanoa";
        picture = "";
        newAccountAmountPersonal = 0;
        newAccountAmountBusiness = 1000;

        startAmountBusiness = 0;
        startAmountPersonal = 10000;
        isIllegal = 0;

        hashPrefix = "TANX"; //Máximo de 4 caracteres

        maxBusinessAccounts = 1;
        maxPersonalAccounts = 1;

        transferPercentage = 0.025;
        disbursePercentage = 0;
        depositPercenatage = 0;
        maxPersonalMinus = 0;
        maxBusinessMinus = 0;
    };

    /*class lehmannBrothers {
        displayName = "Lehmann Brothers";
        picture = "";
        newAccountAmount = 0;
        startAmount = 0;
        isIllegal = 0;
        transferPercentage = 0.01;
        disbursePercentage = 0.01;
        depositPercenatage = 0.01;
    };*/

    class gnBank {
        displayName = "Banco Nacional Goliath";
        picture = "";
        newAccountAmount = 5000;
        
        startAmountBusiness = 0;
        startAmountPersonal = 10000;
        isIllegal = 0;

        hashPrefix = "GNXX"; //Máximo de 4 caracteres

        maxBusinessAccounts = 0;
        maxPersonalAccounts = 1;

        transferPercentage = 0.05;
        disbursePercentage = 0.12;
        depositPercenatage = 0;

        maxPersonalMinus = -5000;
        maxBusinessMinus = -10000;
    };
};
