// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.AudioInEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Apple/MacOSDeviceEnumerator.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A6")]
public class AudioInEnumerator : DeviceEnumeratorBase
{
	[Token(Token = "0x170000F8")]
	public override string Error
	{
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x3F38580", Offset = "0x3F38580", VA = "0x3F38580", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x3F38340", Offset = "0x3F38340", VA = "0x3F38340")]
	public AudioInEnumerator(ILogger logger)
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x3F38370", Offset = "0x3F38370", VA = "0x3F38370", Slot = "14")]
	public override void Refresh()
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x3F38590", Offset = "0x3F38590", VA = "0x3F38590", Slot = "15")]
	public override void Dispose()
	{
	}
}
