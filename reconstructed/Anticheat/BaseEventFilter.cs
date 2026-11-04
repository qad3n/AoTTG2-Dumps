using Photon.Realtime;
using Utility;

namespace Anticheat
{
    internal class BaseEventFilter
    {
        protected Player _player;
        protected PhotonEventType _eventType;

        // a new limit per access means the total limit never trips
        protected virtual RateLimit TotalRateLimit => new RateLimit(100, 1f);
        protected virtual bool AlwaysAllowMaster => true;

        public BaseEventFilter(Player player, PhotonEventType eventType)
        {
            _player = player;
            _eventType = eventType;
        }

        public bool IsMasterOrLocal()
        {
            if (_player.IsLocal)
                return true;
            if (AlwaysAllowMaster && _player.IsMasterClient)
                return true;
            return false;
        }

        public virtual bool CheckEvent(object[] data)
        {
            if (TotalRateLimit.Use(1))
                return true;
            AnticheatManager.KickPlayer(_player, false, "sending too many " + _eventType.ToString() + " events");
            return false;
        }
    }
}
