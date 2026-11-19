// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.DeviceEnumeratorNotSupported
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Device.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000035")]
internal class DeviceEnumeratorNotSupported : DeviceEnumeratorBase
{
	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x30")]
	private string message;

	[Token(Token = "0x1700004A")]
	public override bool IsSupported
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x5704DA0", Offset = "0x5703DA0", VA = "0x5704DA0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004B")]
	public override string Error
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x5704E00", Offset = "0x5703E00", VA = "0x5704E00", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x5704DB0", Offset = "0x5703DB0", VA = "0x5704DB0")]
	public DeviceEnumeratorNotSupported(ILogger logger, string message)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x5704DE0", Offset = "0x5703DE0", VA = "0x5704DE0", Slot = "14")]
	public override void Refresh()
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x5704E10", Offset = "0x5703E10", VA = "0x5704E10", Slot = "15")]
	public override void Dispose()
	{
	}
}
