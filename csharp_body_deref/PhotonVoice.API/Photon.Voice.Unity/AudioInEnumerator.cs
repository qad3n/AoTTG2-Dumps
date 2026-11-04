// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.AudioInEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Apple/MacOSDeviceEnumerator.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A8")]
public class AudioInEnumerator : DeviceEnumeratorBase
{
	[Token(Token = "0x170000FB")]
	public override string Error
	{
		[Token(Token = "0x60003A6")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x1D83BA0", Offset = "0x1D821A0", VA = "0x181D83BA0")]
	public AudioInEnumerator(ILogger logger)
	{
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x1D839D0", Offset = "0x1D81FD0", VA = "0x181D839D0", Slot = "14")]
	public override void Refresh()
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	public override void Dispose()
	{
	}
}
