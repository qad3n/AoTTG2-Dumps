// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.DeviceEnumeratorNotSupported
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Device.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000037")]
internal class DeviceEnumeratorNotSupported : DeviceEnumeratorBase
{
	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x30")]
	private string message;

	[Token(Token = "0x1700004A")]
	public override bool IsSupported
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x3F1A0F0", Offset = "0x3F1A0F0", VA = "0x3F1A0F0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004B")]
	public override string Error
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x3F1A150", Offset = "0x3F1A150", VA = "0x3F1A150", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3F1A100", Offset = "0x3F1A100", VA = "0x3F1A100")]
	public DeviceEnumeratorNotSupported(ILogger logger, string message)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3F1A130", Offset = "0x3F1A130", VA = "0x3F1A130", Slot = "14")]
	public override void Refresh()
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x3F1A160", Offset = "0x3F1A160", VA = "0x3F1A160", Slot = "15")]
	public override void Dispose()
	{
	}
}
