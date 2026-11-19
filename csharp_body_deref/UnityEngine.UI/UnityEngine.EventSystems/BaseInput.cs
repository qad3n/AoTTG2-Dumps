// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.BaseInput
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000BA")]
public class BaseInput : UIBehaviour
{
	[Token(Token = "0x170001E4")]
	public virtual string compositionString
	{
		[Token(Token = "0x6000701")]
		[Address(RVA = "0x6D0D3C0", Offset = "0x6D0C3C0", VA = "0x6D0D3C0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	public virtual IMECompositionMode imeCompositionMode
	{
		[Token(Token = "0x6000702")]
		[Address(RVA = "0x6D0D3D0", Offset = "0x6D0C3D0", VA = "0x6D0D3D0", Slot = "18")]
		get
		{
			return default(IMECompositionMode);
		}
		[Token(Token = "0x6000703")]
		[Address(RVA = "0x6D0D3E0", Offset = "0x6D0C3E0", VA = "0x6D0D3E0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170001E6")]
	public virtual Vector2 compositionCursorPos
	{
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x6D0D3F0", Offset = "0x6D0C3F0", VA = "0x6D0D3F0", Slot = "20")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x6D0D400", Offset = "0x6D0C400", VA = "0x6D0D400", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x170001E7")]
	public virtual bool mousePresent
	{
		[Token(Token = "0x6000706")]
		[Address(RVA = "0x6D0D410", Offset = "0x6D0C410", VA = "0x6D0D410", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E8")]
	public virtual Vector2 mousePosition
	{
		[Token(Token = "0x600070A")]
		[Address(RVA = "0x6D0D450", Offset = "0x6D0C450", VA = "0x6D0D450", Slot = "26")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001E9")]
	public virtual Vector2 mouseScrollDelta
	{
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x6D0D460", Offset = "0x6D0C460", VA = "0x6D0D460", Slot = "27")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001EA")]
	public virtual float mouseScrollDeltaPerTick
	{
		[Token(Token = "0x600070C")]
		[Address(RVA = "0x6D0D470", Offset = "0x6D0C470", VA = "0x6D0D470", Slot = "28")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001EB")]
	public virtual bool touchSupported
	{
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x6D0D480", Offset = "0x6D0C480", VA = "0x6D0D480", Slot = "29")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	public virtual int touchCount
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x6D0D490", Offset = "0x6D0C490", VA = "0x6D0D490", Slot = "30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x6D0D420", Offset = "0x6D0C420", VA = "0x6D0D420", Slot = "23")]
	public virtual bool GetMouseButtonDown(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x6D0D430", Offset = "0x6D0C430", VA = "0x6D0D430", Slot = "24")]
	public virtual bool GetMouseButtonUp(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x6D0D440", Offset = "0x6D0C440", VA = "0x6D0D440", Slot = "25")]
	public virtual bool GetMouseButton(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x6D0D4A0", Offset = "0x6D0C4A0", VA = "0x6D0D4A0", Slot = "31")]
	public virtual Touch GetTouch(int index)
	{
		return default(Touch);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x6D0D4F0", Offset = "0x6D0C4F0", VA = "0x6D0D4F0", Slot = "32")]
	public virtual float GetAxisRaw(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x6D0D500", Offset = "0x6D0C500", VA = "0x6D0D500", Slot = "33")]
	public virtual bool GetButtonDown(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x6D0D510", Offset = "0x6D0C510", VA = "0x6D0D510")]
	public BaseInput()
	{
	}
}
