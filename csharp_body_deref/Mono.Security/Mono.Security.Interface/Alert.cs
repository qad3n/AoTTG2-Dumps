// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.Alert
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x2000028")]
public class Alert
{
	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x10")]
	private AlertLevel level;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x11")]
	private AlertDescription description;

	[Token(Token = "0x1700005B")]
	public AlertLevel Level
	{
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x3ABBFA0", Offset = "0x3ABBFA0", VA = "0x3ABBFA0")]
		get
		{
			return default(AlertLevel);
		}
	}

	[Token(Token = "0x1700005C")]
	public AlertDescription Description
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x3ABBFB0", Offset = "0x3ABBFB0", VA = "0x3ABBFB0")]
		get
		{
			return default(AlertDescription);
		}
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x3ABBFC0", Offset = "0x3ABBFC0", VA = "0x3ABBFC0")]
	public Alert(AlertDescription description)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3ABC010", Offset = "0x3ABC010", VA = "0x3ABC010")]
	private void inferAlertLevel()
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3ABC040", Offset = "0x3ABC040", VA = "0x3ABC040", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
