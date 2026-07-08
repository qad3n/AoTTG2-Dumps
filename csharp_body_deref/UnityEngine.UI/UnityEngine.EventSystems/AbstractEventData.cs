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
		[Address(RVA = "0x4DCD600", Offset = "0x4DCD600", VA = "0x4DCD600", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x4DCD5E0", Offset = "0x4DCD5E0", VA = "0x4DCD5E0", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x4DCD5F0", Offset = "0x4DCD5F0", VA = "0x4DCD5F0", Slot = "5")]
	public virtual void Use()
	{
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x4DCD610", Offset = "0x4DCD610", VA = "0x4DCD610")]
	protected AbstractEventData()
	{
	}
}
