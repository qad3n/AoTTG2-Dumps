// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.Alert
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x200003A")]
public class Alert
{
	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x10")]
	private AlertLevel level;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x11")]
	private AlertDescription description;

	[Token(Token = "0x1700005E")]
	public AlertLevel Level
	{
		[Token(Token = "0x600013F")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(AlertLevel);
		}
	}

	[Token(Token = "0x1700005F")]
	public AlertDescription Description
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0xE5A330", Offset = "0xE58930", VA = "0x180E5A330")]
		get
		{
			return default(AlertDescription);
		}
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x192B230", Offset = "0x1929830", VA = "0x18192B230")]
	public Alert(AlertDescription description)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x192B2D0", Offset = "0x19298D0", VA = "0x18192B2D0")]
	private void inferAlertLevel()
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x192B190", Offset = "0x1929790", VA = "0x18192B190", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
