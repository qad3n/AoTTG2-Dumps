// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.AbstractEventData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x2000099")]
public abstract class AbstractEventData
{
	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x10")]
	protected bool m_Used;

	[Token(Token = "0x1700019E")]
	public virtual bool used
	{
		[Token(Token = "0x6000635")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x1C6F5D0", Offset = "0x1C6DBD0", VA = "0x181C6F5D0", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0xB3C020", Offset = "0xB3A620", VA = "0x180B3C020", Slot = "5")]
	public virtual void Use()
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AbstractEventData()
	{
	}
}
