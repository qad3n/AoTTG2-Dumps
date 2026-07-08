using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000B9")]
public class BaseInput : UIBehaviour
{
	[Token(Token = "0x170001D5")]
	public virtual string compositionString
	{
		[Token(Token = "0x60006C0")]
		[Address(RVA = "0x4DD3550", Offset = "0x4DD3550", VA = "0x4DD3550", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	public virtual IMECompositionMode imeCompositionMode
	{
		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x4DD3560", Offset = "0x4DD3560", VA = "0x4DD3560", Slot = "18")]
		get
		{
			return default(IMECompositionMode);
		}
		[Token(Token = "0x60006C2")]
		[Address(RVA = "0x4DD3570", Offset = "0x4DD3570", VA = "0x4DD3570", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	public virtual Vector2 compositionCursorPos
	{
		[Token(Token = "0x60006C3")]
		[Address(RVA = "0x4DD3580", Offset = "0x4DD3580", VA = "0x4DD3580", Slot = "20")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60006C4")]
		[Address(RVA = "0x4DD3590", Offset = "0x4DD3590", VA = "0x4DD3590", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x170001D8")]
	public virtual bool mousePresent
	{
		[Token(Token = "0x60006C5")]
		[Address(RVA = "0x4DD35A0", Offset = "0x4DD35A0", VA = "0x4DD35A0", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D9")]
	public virtual Vector2 mousePosition
	{
		[Token(Token = "0x60006C9")]
		[Address(RVA = "0x4DD35E0", Offset = "0x4DD35E0", VA = "0x4DD35E0", Slot = "26")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001DA")]
	public virtual Vector2 mouseScrollDelta
	{
		[Token(Token = "0x60006CA")]
		[Address(RVA = "0x4DD35F0", Offset = "0x4DD35F0", VA = "0x4DD35F0", Slot = "27")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001DB")]
	public virtual bool touchSupported
	{
		[Token(Token = "0x60006CB")]
		[Address(RVA = "0x4DD3600", Offset = "0x4DD3600", VA = "0x4DD3600", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DC")]
	public virtual int touchCount
	{
		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x4DD3610", Offset = "0x4DD3610", VA = "0x4DD3610", Slot = "29")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x4DD35B0", Offset = "0x4DD35B0", VA = "0x4DD35B0", Slot = "23")]
	public virtual bool GetMouseButtonDown(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x4DD35C0", Offset = "0x4DD35C0", VA = "0x4DD35C0", Slot = "24")]
	public virtual bool GetMouseButtonUp(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x4DD35D0", Offset = "0x4DD35D0", VA = "0x4DD35D0", Slot = "25")]
	public virtual bool GetMouseButton(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x4DD3620", Offset = "0x4DD3620", VA = "0x4DD3620", Slot = "30")]
	public virtual Touch GetTouch(int index)
	{
		return default(Touch);
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x4DD3670", Offset = "0x4DD3670", VA = "0x4DD3670", Slot = "31")]
	public virtual float GetAxisRaw(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x4DD3680", Offset = "0x4DD3680", VA = "0x4DD3680", Slot = "32")]
	public virtual bool GetButtonDown(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x4DD3690", Offset = "0x4DD3690", VA = "0x4DD3690")]
	public BaseInput()
	{
	}
}
