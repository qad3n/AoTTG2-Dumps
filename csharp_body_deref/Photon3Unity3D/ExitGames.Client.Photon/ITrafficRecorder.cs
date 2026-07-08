using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000018")]
public interface ITrafficRecorder
{
	[Token(Token = "0x17000029")]
	bool Enabled
	{
		[Token(Token = "0x60000CB")]
		get;
		[Token(Token = "0x60000CC")]
		set;
	}

	[Token(Token = "0x60000CD")]
	void Record(byte[] inBuffer, int length, bool incoming, short peerId, IPhotonSocket connection);
}
