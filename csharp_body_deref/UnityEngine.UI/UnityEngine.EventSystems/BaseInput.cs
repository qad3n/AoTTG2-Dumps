// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.BaseInput
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2FC14C0", Offset = "0x2FBFAC0", VA = "0x182FC14C0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	public virtual IMECompositionMode imeCompositionMode
	{
		[Token(Token = "0x6000702")]
		[Address(RVA = "0x32F1EA0", Offset = "0x32F04A0", VA = "0x1832F1EA0", Slot = "18")]
		get
		{
			return default(IMECompositionMode);
		}
		[Token(Token = "0x6000703")]
		[Address(RVA = "0x32F1ED0", Offset = "0x32F04D0", VA = "0x1832F1ED0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170001E6")]
	public virtual Vector2 compositionCursorPos
	{
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x32F1E90", Offset = "0x32F0490", VA = "0x1832F1E90", Slot = "20")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x32F1EB0", Offset = "0x32F04B0", VA = "0x1832F1EB0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x170001E7")]
	public virtual bool mousePresent
	{
		[Token(Token = "0x6000706")]
		[Address(RVA = "0x2FC1500", Offset = "0x2FBFB00", VA = "0x182FC1500", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E8")]
	public virtual Vector2 mousePosition
	{
		[Token(Token = "0x600070A")]
		[Address(RVA = "0x2AE36D0", Offset = "0x2AE1CD0", VA = "0x182AE36D0", Slot = "26")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001E9")]
	public virtual Vector2 mouseScrollDelta
	{
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x2FC1510", Offset = "0x2FBFB10", VA = "0x182FC1510", Slot = "27")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001EA")]
	public virtual float mouseScrollDeltaPerTick
	{
		[Token(Token = "0x600070C")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "28")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001EB")]
	public virtual bool touchSupported
	{
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x2FC1530", Offset = "0x2FBFB30", VA = "0x182FC1530", Slot = "29")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	public virtual int touchCount
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x2FC1520", Offset = "0x2FBFB20", VA = "0x182FC1520", Slot = "30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x2FC1440", Offset = "0x2FBFA40", VA = "0x182FC1440", Slot = "23")]
	public virtual bool GetMouseButtonDown(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x2FC1450", Offset = "0x2FBFA50", VA = "0x182FC1450", Slot = "24")]
	public virtual bool GetMouseButtonUp(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x2FC1460", Offset = "0x2FBFA60", VA = "0x182FC1460", Slot = "25")]
	public virtual bool GetMouseButton(int button)
	{
		return default(bool);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x2FC1470", Offset = "0x2FBFA70", VA = "0x182FC1470", Slot = "31")]
	public virtual Touch GetTouch(int index)
	{
		return default(Touch);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x2FC13D0", Offset = "0x2FBF9D0", VA = "0x182FC13D0", Slot = "32")]
	public virtual float GetAxisRaw(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x2FC13E0", Offset = "0x2FBF9E0", VA = "0x182FC13E0", Slot = "33")]
	public virtual bool GetButtonDown(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public BaseInput()
	{
	}
}
