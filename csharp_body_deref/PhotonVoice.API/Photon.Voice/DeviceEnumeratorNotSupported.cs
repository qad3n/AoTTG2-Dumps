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
		[Address(RVA = "0x3C247A0", Offset = "0x3C247A0", VA = "0x3C247A0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004B")]
	public override string Error
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x3C24800", Offset = "0x3C24800", VA = "0x3C24800", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3C247B0", Offset = "0x3C247B0", VA = "0x3C247B0")]
	public DeviceEnumeratorNotSupported(ILogger logger, string message)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3C247E0", Offset = "0x3C247E0", VA = "0x3C247E0", Slot = "14")]
	public override void Refresh()
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x3C24810", Offset = "0x3C24810", VA = "0x3C24810", Slot = "15")]
	public override void Dispose()
	{
	}
}
