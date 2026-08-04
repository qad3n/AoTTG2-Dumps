// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.AbstractEventData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x2000097")]
public abstract class AbstractEventData
{
	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x10")]
	protected bool m_Used;

	[Token(Token = "0x1700018E")]
	public virtual bool used
	{
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x50F4F50", Offset = "0x50F4F50", VA = "0x50F4F50", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x50F4F30", Offset = "0x50F4F30", VA = "0x50F4F30", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x50F4F40", Offset = "0x50F4F40", VA = "0x50F4F40", Slot = "5")]
	public virtual void Use()
	{
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x50F4F60", Offset = "0x50F4F60", VA = "0x50F4F60")]
	protected AbstractEventData()
	{
	}
}
