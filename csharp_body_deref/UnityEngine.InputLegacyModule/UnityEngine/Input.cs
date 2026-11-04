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
		[Address(RVA = "0x2FC4670", Offset = "0x2FC2C70", VA = "0x182FC4670")]
		get;
	}

	[Token(Token = "0x17000010")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool anyKeyDown
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x2FC4640", Offset = "0x2FC2C40", VA = "0x182FC4640")]
		get;
	}

	[Token(Token = "0x17000011")]
	[UnityEngine.Bindings.NativeThrows]
	public static Vector3 mousePosition
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x2FC4880", Offset = "0x2FC2E80", VA = "0x182FC4880")]
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
		[Address(RVA = "0x2FC4970", Offset = "0x2FC2F70", VA = "0x182FC4970")]
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
		[Address(RVA = "0x2FC4810", Offset = "0x2FC2E10", VA = "0x182FC4810")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x2FC4C30", Offset = "0x2FC3230", VA = "0x182FC4C30")]
		set;
	}

	[Token(Token = "0x17000014")]
	public static string compositionString
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x2FC4760", Offset = "0x2FC2D60", VA = "0x182FC4760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public static Vector2 compositionCursorPos
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x2FC46E0", Offset = "0x2FC2CE0", VA = "0x182FC46E0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x2FC4BF0", Offset = "0x2FC31F0", VA = "0x182FC4BF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	internal static bool simulateTouchEnabled
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x2FC49B0", Offset = "0x2FC2FB0", VA = "0x182FC49B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000017")]
	public static bool mousePresent
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x2FC48C0", Offset = "0x2FC2EC0", VA = "0x182FC48C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	public static bool touchSupported
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x2FC4A20", Offset = "0x2FC3020", VA = "0x182FC4A20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000019")]
	public static extern int touchCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x2FC49F0", Offset = "0x2FC2FF0", VA = "0x182FC49F0")]
		[UnityEngine.Bindings.FreeFunction("GetTouchCount")]
		get;
	}

	[Token(Token = "0x1700001A")]
	public static Touch[] touches
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x2FC4A90", Offset = "0x2FC3090", VA = "0x182FC4A90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2FC42F0", Offset = "0x2FC28F0", VA = "0x182FC42F0")]
	public static float GetAxis(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x2FC42E0", Offset = "0x2FC28E0", VA = "0x182FC42E0")]
	public static float GetAxisRaw(string axisName)
	{
		return default(float);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2FC4320", Offset = "0x2FC2920", VA = "0x182FC4320")]
	public static bool GetButton(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2FC4300", Offset = "0x2FC2900", VA = "0x182FC4300")]
	public static bool GetButtonDown(string buttonName)
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x2FC4310", Offset = "0x2FC2910", VA = "0x182FC4310")]
	public static bool GetButtonUp(string buttonName)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x2FC4370", Offset = "0x2FC2970", VA = "0x182FC4370")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x2FC43B0", Offset = "0x2FC29B0", VA = "0x182FC43B0")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyUpInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2FC4330", Offset = "0x2FC2930", VA = "0x182FC4330")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern bool GetKeyDownInt(KeyCode key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2FC4500", Offset = "0x2FC2B00", VA = "0x182FC4500")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButton(int button);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2FC4480", Offset = "0x2FC2A80", VA = "0x182FC4480")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButtonDown(int button);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x2FC44C0", Offset = "0x2FC2AC0", VA = "0x182FC44C0")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern bool GetMouseButtonUp(int button);

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2FC45E0", Offset = "0x2FC2BE0", VA = "0x182FC45E0")]
	[UnityEngine.Bindings.NativeThrows]
	public static Touch GetTouch(int index)
	{
		return default(Touch);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x2FC4430", Offset = "0x2FC2A30", VA = "0x182FC4430")]
	[UnityEngine.Bindings.NativeThrows]
	public static PenData GetLastPenContactEvent()
	{
		return default(PenData);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x2FC42B0", Offset = "0x2FC28B0", VA = "0x182FC42B0")]
	[UnityEngine.Bindings.NativeThrows]
	public static extern void ClearLastPenContactEvent();

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2FC4370", Offset = "0x2FC2970", VA = "0x182FC4370")]
	public static bool GetKey(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2FC43B0", Offset = "0x2FC29B0", VA = "0x182FC43B0")]
	public static bool GetKeyUp(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2FC4330", Offset = "0x2FC2930", VA = "0x182FC4330")]
	public static bool GetKeyDown(KeyCode key)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x2FC4540", Offset = "0x2FC2B40", VA = "0x182FC4540")]
	[UnityEngine.Bindings.FreeFunction("GetMousePresent")]
	private static extern bool GetMousePresentInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x2FC4570", Offset = "0x2FC2B70", VA = "0x182FC4570")]
	[UnityEngine.Bindings.FreeFunction("IsTouchSupported")]
	private static extern bool GetTouchSupportedInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2FC4280", Offset = "0x2FC2880", VA = "0x182FC4280")]
	internal static extern bool CheckDisabled();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x2FC45A0", Offset = "0x2FC2BA0", VA = "0x182FC45A0")]
	private static extern void GetTouch_Injected(int index, out Touch ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x2FC43F0", Offset = "0x2FC29F0", VA = "0x182FC43F0")]
	private static extern void GetLastPenContactEvent_Injected(out PenData ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2FC4840", Offset = "0x2FC2E40", VA = "0x182FC4840")]
	private static extern void get_mousePosition_Injected(out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2FC4930", Offset = "0x2FC2F30", VA = "0x182FC4930")]
	private static extern void get_mouseScrollDelta_Injected(out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2FC4720", Offset = "0x2FC2D20", VA = "0x182FC4720")]
	private static extern void get_compositionString_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2FC46A0", Offset = "0x2FC2CA0", VA = "0x182FC46A0")]
	private static extern void get_compositionCursorPos_Injected(out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2FC4BB0", Offset = "0x2FC31B0", VA = "0x182FC4BB0")]
	private static extern void set_compositionCursorPos_Injected([In] ref Vector2 value);
}
