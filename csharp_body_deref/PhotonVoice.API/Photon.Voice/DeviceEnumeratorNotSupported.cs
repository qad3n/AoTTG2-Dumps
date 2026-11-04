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
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004B")]
	public override string Error
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x1D68E80", Offset = "0x1D67480", VA = "0x181D68E80")]
	public DeviceEnumeratorNotSupported(ILogger logger, string message)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x1D68E60", Offset = "0x1D67460", VA = "0x181D68E60", Slot = "14")]
	public override void Refresh()
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	public override void Dispose()
	{
	}
}
