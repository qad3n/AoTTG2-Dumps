using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200000A")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputBindings.h")]
public class Input
{
	[Token(Token = "0x1700000F")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool anyKey
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4B47CD0", Offset = "0x4B47CD0", VA = "0x4B47CD0")]
		get;
	}

	[Token(Token = "0x17000010")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool anyKeyDown
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4B47D00", Offset = "0x4B47D00", VA = "0x4B47D00")]
		get;
	}

	[Token(Token = "0x17000011")]
	[UnityEngine.Bindings.NativeThrows]
	public static Vector3 mousePosition
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4B47D30", Offset = "0x4B47D30", VA = "0x4B47D30")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000012")]
	[UnityEngine.Bindings.NativeThrows]
	public static Vector2 mouseScrollDelta
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4B47DB0", Offset = "0x4B47DB0", VA = "0x4B47DB0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000013")]
	public static extern IMECompositionMode imeCompositionMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4B47E20", Offset = "0x4B47E20", VA = "0x4B47E20")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4B47E50", Offset = "0x4B47E50", VA = "0x4B47E50")]
		set;
	}

	[Token(Token = "0x17000014")]
	public static extern string compositionString
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4B47E80", Offset = "0x4B47E80", VA = "0x4B47E80")]
		get;
	}

	[Token(Token = "0x17000015")]
	public static Vector2 compositionCursorPos
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4B47EB0", Offset = "0x4B47EB0", VA = "0x4B47EB0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4B47F20", Offset = "0x4B47F20", VA = "0x4B47F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public static extern bool mousePresent
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4B47F90", Offset = "0x4B47F90", VA = "0x4B47F90")]
		[UnityEngine.Bindings.FreeFunction("GetMousePresent")]
		get;
	}

	[Token(Token = "0x17000017")]
	public static extern int touchCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4B47FC0", Offset = "0x4B47FC0", VA = "0x4B47FC0")]
		[UnityEngine.Bindings.FreeFunction("GetTouchCount")]
		get;
	}

	[Token(Token = "0x17000018")]
	public static extern bool touchSupported
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4B47FF0", Offset = "0x4B47FF0", VA = "0x4B47FF0")]
		[UnityEngine.Bindings.FreeFunction("IsTouchSupported")]
		get;
	}

	[Token(Token = "0x17000019")]
	public static Touch[] touches
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4B48020", Offset = "0x4B48020", VA = "0x4B48020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4B477A0", Offset = "0x4B477A0", VA = "0x4B477A0")]
	public static float GetAxis(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4B47800", Offset = "0x4B47800", VA = "0x4B47800")]
	public static float GetAxisRaw(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4B47860", Offset = "0x4B47860", VA = "0x4B47860")]
	public static bool GetButton(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4B478C0", Offset = "0x4B478C0", VA = "0x4B478C0")]
	public static bool GetButtonDown(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4B47920", Offset = "0x4B47920", VA = "0x4B47920")]
	public static bool GetButtonUp(string buttonName)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4B47980", Offset = "0x4B47980", VA = "0x4B47980")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4B479B0", Offset = "0x4B479B0", VA = "0x4B479B0")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyUpInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4B479E0", Offset = "0x4B479E0", VA = "0x4B479E0")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyDownInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4B47A10", Offset = "0x4B47A10", VA = "0x4B47A10")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButton(int button);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4B47A40", Offset = "0x4B47A40", VA = "0x4B47A40")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButtonDown(int button);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4B47A70", Offset = "0x4B47A70", VA = "0x4B47A70")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButtonUp(int button);

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4B47AA0", Offset = "0x4B47AA0", VA = "0x4B47AA0")]
	[UnityEngine.Bindings.NativeThrows]
	public static Touch GetTouch(int index)
	{
		return default(Touch);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4B47B70", Offset = "0x4B47B70", VA = "0x4B47B70")]
	[UnityEngine.Bindings.NativeThrows]
	public static PenData GetLastPenContactEvent()
	{
		return default(PenData);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4B47C10", Offset = "0x4B47C10", VA = "0x4B47C10")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern void ClearLastPenContactEvent();

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4B47C40", Offset = "0x4B47C40", VA = "0x4B47C40")]
	public static bool GetKey(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4B47C70", Offset = "0x4B47C70", VA = "0x4B47C70")]
	public static bool GetKeyUp(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4B47CA0", Offset = "0x4B47CA0", VA = "0x4B47CA0")]
	public static bool GetKeyDown(KeyCode key)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4B48220", Offset = "0x4B48220", VA = "0x4B48220")]
	internal static extern bool CheckDisabled();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4B47B30", Offset = "0x4B47B30", VA = "0x4B47B30")]
	private static extern void GetTouch_Injected(int index, out Touch ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4B47BE0", Offset = "0x4B47BE0", VA = "0x4B47BE0")]
	private static extern void GetLastPenContactEvent_Injected(out PenData ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4B47D80", Offset = "0x4B47D80", VA = "0x4B47D80")]
	private static extern void get_mousePosition_Injected(out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4B47DF0", Offset = "0x4B47DF0", VA = "0x4B47DF0")]
	private static extern void get_mouseScrollDelta_Injected(out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4B47EF0", Offset = "0x4B47EF0", VA = "0x4B47EF0")]
	private static extern void get_compositionCursorPos_Injected(out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4B47F60", Offset = "0x4B47F60", VA = "0x4B47F60")]
	private static extern void set_compositionCursorPos_Injected([In] ref Vector2 value);
}
