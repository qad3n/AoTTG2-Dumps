// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.ITrafficRecorder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
