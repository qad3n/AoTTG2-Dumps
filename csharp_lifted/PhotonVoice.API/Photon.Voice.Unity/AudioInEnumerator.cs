// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.AudioInEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Apple/MacOSDeviceEnumerator.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A4")]
public class AudioInEnumerator : DeviceEnumeratorBase
{
	[Token(Token = "0x170000F8")]
	public override string Error
	{
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x57224C0", Offset = "0x57214C0", VA = "0x57224C0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x5722280", Offset = "0x5721280", VA = "0x5722280")]
	public AudioInEnumerator(ILogger logger)
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x57222B0", Offset = "0x57212B0", VA = "0x57222B0", Slot = "14")]
	public override void Refresh()
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x57224D0", Offset = "0x57214D0", VA = "0x57224D0", Slot = "15")]
	public override void Dispose()
	{
	}
}
