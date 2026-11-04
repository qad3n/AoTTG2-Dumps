namespace Anticheat
{
    internal class RoomBanEntry
    {
        public string SessionId;
        public string IPAddress;
        public string Username;
        public int ActorNumber;
        public bool IsIPBan;
        public string Reason;
        public bool CanUnban;
    }
}
