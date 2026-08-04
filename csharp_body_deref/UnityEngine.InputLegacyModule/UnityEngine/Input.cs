// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Input
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E6F600", Offset = "0x4E6F600", VA = "0x4E6F600")]
		get;
	}

	[Token(Token = "0x17000010")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool anyKeyDown
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4E6F630", Offset = "0x4E6F630", VA = "0x4E6F630")]
		get;
	}

	[Token(Token = "0x17000011")]
	[UnityEngine.Bindings.NativeThrows]
	public static Vector3 mousePosition
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4E6F660", Offset = "0x4E6F660", VA = "0x4E6F660")]
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
		[Address(RVA = "0x4E6F6E0", Offset = "0x4E6F6E0", VA = "0x4E6F6E0")]
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
		[Address(RVA = "0x4E6F750", Offset = "0x4E6F750", VA = "0x4E6F750")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4E6F780", Offset = "0x4E6F780", VA = "0x4E6F780")]
		set;
	}

	[Token(Token = "0x17000014")]
	public static extern string compositionString
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4E6F7B0", Offset = "0x4E6F7B0", VA = "0x4E6F7B0")]
		get;
	}

	[Token(Token = "0x17000015")]
	public static Vector2 compositionCursorPos
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4E6F7E0", Offset = "0x4E6F7E0", VA = "0x4E6F7E0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4E6F850", Offset = "0x4E6F850", VA = "0x4E6F850")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public static extern bool mousePresent
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4E6F8C0", Offset = "0x4E6F8C0", VA = "0x4E6F8C0")]
		[UnityEngine.Bindings.FreeFunction("GetMousePresent")]
		get;
	}

	[Token(Token = "0x17000017")]
	public static extern int touchCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4E6F8F0", Offset = "0x4E6F8F0", VA = "0x4E6F8F0")]
		[UnityEngine.Bindings.FreeFunction("GetTouchCount")]
		get;
	}

	[Token(Token = "0x17000018")]
	public static extern bool touchSupported
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4E6F920", Offset = "0x4E6F920", VA = "0x4E6F920")]
		[UnityEngine.Bindings.FreeFunction("IsTouchSupported")]
		get;
	}

	[Token(Token = "0x17000019")]
	public static Touch[] touches
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4E6F950", Offset = "0x4E6F950", VA = "0x4E6F950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4E6F0D0", Offset = "0x4E6F0D0", VA = "0x4E6F0D0")]
	public static float GetAxis(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4E6F130", Offset = "0x4E6F130", VA = "0x4E6F130")]
	public static float GetAxisRaw(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4E6F190", Offset = "0x4E6F190", VA = "0x4E6F190")]
	public static bool GetButton(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4E6F1F0", Offset = "0x4E6F1F0", VA = "0x4E6F1F0")]
	public static bool GetButtonDown(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4E6F250", Offset = "0x4E6F250", VA = "0x4E6F250")]
	public static bool GetButtonUp(string buttonName)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4E6F2B0", Offset = "0x4E6F2B0", VA = "0x4E6F2B0")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4E6F2E0", Offset = "0x4E6F2E0", VA = "0x4E6F2E0")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyUpInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4E6F310", Offset = "0x4E6F310", VA = "0x4E6F310")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyDownInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4E6F340", Offset = "0x4E6F340", VA = "0x4E6F340")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButton(int button);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4E6F370", Offset = "0x4E6F370", VA = "0x4E6F370")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButtonDown(int button);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4E6F3A0", Offset = "0x4E6F3A0", VA = "0x4E6F3A0")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButtonUp(int button);

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4E6F3D0", Offset = "0x4E6F3D0", VA = "0x4E6F3D0")]
	[UnityEngine.Bindings.NativeThrows]
	public static Touch GetTouch(int index)
	{
		return default(Touch);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4E6F4A0", Offset = "0x4E6F4A0", VA = "0x4E6F4A0")]
	[UnityEngine.Bindings.NativeThrows]
	public static PenData GetLastPenContactEvent()
	{
		return default(PenData);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4E6F540", Offset = "0x4E6F540", VA = "0x4E6F540")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern void ClearLastPenContactEvent();

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4E6F570", Offset = "0x4E6F570", VA = "0x4E6F570")]
	public static bool GetKey(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4E6F5A0", Offset = "0x4E6F5A0", VA = "0x4E6F5A0")]
	public static bool GetKeyUp(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4E6F5D0", Offset = "0x4E6F5D0", VA = "0x4E6F5D0")]
	public static bool GetKeyDown(KeyCode key)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4E6FB50", Offset = "0x4E6FB50", VA = "0x4E6FB50")]
	internal static extern bool CheckDisabled();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4E6F460", Offset = "0x4E6F460", VA = "0x4E6F460")]
	private static extern void GetTouch_Injected(int index, out Touch ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4E6F510", Offset = "0x4E6F510", VA = "0x4E6F510")]
	private static extern void GetLastPenContactEvent_Injected(out PenData ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4E6F6B0", Offset = "0x4E6F6B0", VA = "0x4E6F6B0")]
	private static extern void get_mousePosition_Injected(out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4E6F720", Offset = "0x4E6F720", VA = "0x4E6F720")]
	private static extern void get_mouseScrollDelta_Injected(out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4E6F820", Offset = "0x4E6F820", VA = "0x4E6F820")]
	private static extern void get_compositionCursorPos_Injected(out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4E6F890", Offset = "0x4E6F890", VA = "0x4E6F890")]
	private static extern void set_compositionCursorPos_Injected([In] ref Vector2 value);
}
