// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Input
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200000B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputBindings.h")]
public class Input
{
	[Token(Token = "0x4000030")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Gyroscope s_MainGyro;

	[Token(Token = "0x17000011")]
	public static extern bool simulateMouseWithTouches
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x69BEA90", Offset = "0x69BDA90", VA = "0x69BEA90")]
		set;
	}

	[Token(Token = "0x17000012")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool anyKey
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x69BEAC0", Offset = "0x69BDAC0", VA = "0x69BEAC0")]
		get;
	}

	[Token(Token = "0x17000013")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool anyKeyDown
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x69BEAF0", Offset = "0x69BDAF0", VA = "0x69BEAF0")]
		get;
	}

	[Token(Token = "0x17000014")]
	[UnityEngine.Bindings.NativeThrows]
	public static Vector3 mousePosition
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x69BEB20", Offset = "0x69BDB20", VA = "0x69BEB20")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000015")]
	[UnityEngine.Bindings.NativeThrows]
	public static Vector2 mouseScrollDelta
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x69BEBA0", Offset = "0x69BDBA0", VA = "0x69BEBA0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000016")]
	public static extern IMECompositionMode imeCompositionMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x69BEC10", Offset = "0x69BDC10", VA = "0x69BEC10")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x69BEC40", Offset = "0x69BDC40", VA = "0x69BEC40")]
		set;
	}

	[Token(Token = "0x17000017")]
	public static string compositionString
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x69BEC70", Offset = "0x69BDC70", VA = "0x69BEC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public static Vector2 compositionCursorPos
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x69BED60", Offset = "0x69BDD60", VA = "0x69BED60")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x69BEDD0", Offset = "0x69BDDD0", VA = "0x69BEDD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	internal static bool simulateTouchEnabled
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x69BEE40", Offset = "0x69BDE40", VA = "0x69BEE40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	public static bool mousePresent
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x69BEEE0", Offset = "0x69BDEE0", VA = "0x69BEEE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001B")]
	public static bool touchSupported
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x69BEF40", Offset = "0x69BDF40", VA = "0x69BEF40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001C")]
	public static extern int touchCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x69BEFA0", Offset = "0x69BDFA0", VA = "0x69BEFA0")]
		[UnityEngine.Bindings.FreeFunction("GetTouchCount")]
		get;
	}

	[Token(Token = "0x1700001D")]
	public static Gyroscope gyro
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x69BF000", Offset = "0x69BE000", VA = "0x69BF000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public static Touch[] touches
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x69BF0C0", Offset = "0x69BE0C0", VA = "0x69BF0C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x69BDFE0", Offset = "0x69BCFE0", VA = "0x69BDFE0")]
	public static float GetAxis(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x69BE150", Offset = "0x69BD150", VA = "0x69BE150")]
	public static float GetAxisRaw(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x69BE2C0", Offset = "0x69BD2C0", VA = "0x69BE2C0")]
	public static bool GetButton(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x69BE440", Offset = "0x69BD440", VA = "0x69BE440")]
	public static bool GetButtonDown(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x69BE5C0", Offset = "0x69BD5C0", VA = "0x69BE5C0")]
	public static bool GetButtonUp(string buttonName)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x69BE740", Offset = "0x69BD740", VA = "0x69BE740")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x69BE770", Offset = "0x69BD770", VA = "0x69BE770")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyUpInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x69BE7A0", Offset = "0x69BD7A0", VA = "0x69BE7A0")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyDownInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x69BE7D0", Offset = "0x69BD7D0", VA = "0x69BE7D0")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButton(int button);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x69BE800", Offset = "0x69BD800", VA = "0x69BE800")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButtonDown(int button);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x69BE830", Offset = "0x69BD830", VA = "0x69BE830")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButtonUp(int button);

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x69BE860", Offset = "0x69BD860", VA = "0x69BE860")]
	[UnityEngine.Bindings.NativeThrows]
	public static Touch GetTouch(int index)
	{
		return default(Touch);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x69BE930", Offset = "0x69BD930", VA = "0x69BE930")]
	[UnityEngine.Bindings.NativeThrows]
	public static PenData GetLastPenContactEvent()
	{
		return default(PenData);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x69BE9D0", Offset = "0x69BD9D0", VA = "0x69BE9D0")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern void ClearLastPenContactEvent();

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x69BEA00", Offset = "0x69BDA00", VA = "0x69BEA00")]
	public static bool GetKey(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x69BEA30", Offset = "0x69BDA30", VA = "0x69BEA30")]
	public static bool GetKeyUp(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x69BEA60", Offset = "0x69BDA60", VA = "0x69BEA60")]
	public static bool GetKeyDown(KeyCode key)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x69BEE80", Offset = "0x69BDE80", VA = "0x69BEE80")]
	[UnityEngine.Bindings.FreeFunction("GetMousePresent")]
	private static extern bool GetMousePresentInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x69BEEB0", Offset = "0x69BDEB0", VA = "0x69BEEB0")]
	[UnityEngine.Bindings.FreeFunction("IsTouchSupported")]
	private static extern bool GetTouchSupportedInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x69BEFD0", Offset = "0x69BDFD0", VA = "0x69BEFD0")]
	[UnityEngine.Bindings.FreeFunction("GetGyro")]
	private static extern int GetGyroInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x69BF290", Offset = "0x69BE290", VA = "0x69BF290")]
	internal static extern bool CheckDisabled();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x69BE8F0", Offset = "0x69BD8F0", VA = "0x69BE8F0")]
	private static extern void GetTouch_Injected(int index, out Touch ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x69BE9A0", Offset = "0x69BD9A0", VA = "0x69BE9A0")]
	private static extern void GetLastPenContactEvent_Injected(out PenData ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x69BEB70", Offset = "0x69BDB70", VA = "0x69BEB70")]
	private static extern void get_mousePosition_Injected(out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x69BEBE0", Offset = "0x69BDBE0", VA = "0x69BEBE0")]
	private static extern void get_mouseScrollDelta_Injected(out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x69BED30", Offset = "0x69BDD30", VA = "0x69BED30")]
	private static extern void get_compositionString_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x69BEDA0", Offset = "0x69BDDA0", VA = "0x69BEDA0")]
	private static extern void get_compositionCursorPos_Injected(out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x69BEE10", Offset = "0x69BDE10", VA = "0x69BEE10")]
	private static extern void set_compositionCursorPos_Injected([In] ref Vector2 value);
}
