using Photon.Pun;

namespace Characters
{
    internal class WallColossalMovementSync : BaseMovementSync
    {
        protected WallColossalShifter _wallColossal;

        protected override void Awake()
        {
            base.Awake();
            _wallColossal = GetComponent<WallColossalShifter>();
        }

        protected override void SendCustomStream(PhotonStream stream)
        {
            stream.SendNext((byte)_wallColossal._steamState);
            stream.SendNext((byte)_wallColossal._stunState);
        }

        protected override void ReceiveCustomStream(PhotonStream stream)
        {
            if (stream.PeekNext() is byte)
            {
                ColossalSteamState steamState = (ColossalSteamState)stream.ReceiveNext();
                if (_wallColossal._steamState != steamState)
                    _wallColossal.ApplySteamState(steamState);
            }
            if (stream.PeekNext() is byte)
            {
                ColossalStunState stunState = (ColossalStunState)stream.ReceiveNext();
                if (_wallColossal._stunState != stunState)
                    _wallColossal.ApplyStunState(stunState);
            }
        }
    }
}
