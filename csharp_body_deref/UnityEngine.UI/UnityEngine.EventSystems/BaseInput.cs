// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.BaseInput
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000B9")]
public class BaseInput : UIBehaviour
{
	[Token(Token = "0x170001D5")]
	public virtual string compositionString
	{
		[Token(Token = "0x60006C0")]
		[Address(RVA = "0x50FAEA0", Offset = "0x50FAEA0", VA = "0x50FAEA0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	public virtual IMECompositionMode imeCompositionMode
	{
		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x50FAEB0", Offset = "0x50FAEB0", VA = "0x50FAEB0", Slot = "18")]
		get
		{
			return default(IMECompositionMode);
		}
		[Token(Token = "0x60006C2")]
		[Address(RVA = "0x50FAEC0", Offset = "0x50FAEC0", VA = "0x50FAEC0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	public virtual Vector2 compositionCursorPos
	{
		[Token(Token = "0x60006C3")]
		[Address(RVA = "0x50FAED0", Offset = "0x50FAED0", VA = "0x50FAED0", Slot = "20")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60006C4")]
		[Address(RVA = "0x50FAEE0", Offset = "0x50FAEE0", VA = "0x50FAEE0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x170001D8")]
	public virtual bool mousePresent
	{
		[Token(Token = "0x60006C5")]
		[Address(RVA = "0x50FAEF0", Offset = "0x50FAEF0", VA = "0x50FAEF0", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D9")]
	public virtual Vector2 mousePosition
	{
		[Token(Token = "0x60006C9")]
		[Address(RVA = "0x50FAF30", Offset = "0x50FAF30", VA = "0x50FAF30", Slot = "26")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001DA")]
	public virtual Vector2 mouseScrollDelta
	{
		[Token(Token = "0x60006CA")]
		[Address(RVA = "0x50FAF40", Offset = "0x50FAF40", VA = "0x50FAF40", Slot = "27")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001DB")]
	public virtual bool touchSupported
	{
		[Token(Token = "0x60006CB")]
		[Address(RVA = "0x50FAF50", Offset = "0x50FAF50", VA = "0x50FAF50", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DC")]
	public virtual int touchCount
	{
		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x50FAF60", Offset = "0x50FAF60", VA = "0x50FAF60", Slot = "29")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x50FAF00", Offset = "0x50FAF00", VA = "0x50FAF00", Slot = "23")]
	public virtual bool GetMouseButtonDown(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x50FAF10", Offset = "0x50FAF10", VA = "0x50FAF10", Slot = "24")]
	public virtual bool GetMouseButtonUp(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x50FAF20", Offset = "0x50FAF20", VA = "0x50FAF20", Slot = "25")]
	public virtual bool GetMouseButton(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x50FAF70", Offset = "0x50FAF70", VA = "0x50FAF70", Slot = "30")]
	public virtual Touch GetTouch(int index)
	{
		return default(Touch);
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x50FAFC0", Offset = "0x50FAFC0", VA = "0x50FAFC0", Slot = "31")]
	public virtual float GetAxisRaw(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x50FAFD0", Offset = "0x50FAFD0", VA = "0x50FAFD0", Slot = "32")]
	public virtual bool GetButtonDown(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x50FAFE0", Offset = "0x50FAFE0", VA = "0x50FAFE0")]
	public BaseInput()
	{
	}
}
