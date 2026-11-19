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
		[Address(RVA = "0x6D07A20", Offset = "0x6D06A20", VA = "0x6D07A20", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x6D07A00", Offset = "0x6D06A00", VA = "0x6D07A00", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x6D07A10", Offset = "0x6D06A10", VA = "0x6D07A10", Slot = "5")]
	public virtual void Use()
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x6D07A30", Offset = "0x6D06A30", VA = "0x6D07A30")]
	protected AbstractEventData()
	{
	}
}
