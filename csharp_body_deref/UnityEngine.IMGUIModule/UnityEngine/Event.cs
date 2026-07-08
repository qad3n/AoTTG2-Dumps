using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000002")]
[UnityEngine.Bindings.StaticAccessor("GUIEvent", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/Event.bindings.h")]
public sealed class Event
{
	[NonSerialized]
	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Event s_Current;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Event s_MasterEvent;

	[Token(Token = "0x17000001")]
	[UnityEngine.Bindings.NativeProperty("type", false, UnityEngine.Bindings.TargetType.Field)]
	public extern EventType rawType
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x4B15940", Offset = "0x4B15940", VA = "0x4B15940")]
		get;
	}

	[Token(Token = "0x17000002")]
	[UnityEngine.Bindings.NativeProperty("mousePosition", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 mousePosition
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4B15970", Offset = "0x4B15970", VA = "0x4B15970")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4B15A00", Offset = "0x4B15A00", VA = "0x4B15A00")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("delta", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 delta
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4B15A80", Offset = "0x4B15A80", VA = "0x4B15A80")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4B15B10", Offset = "0x4B15B10", VA = "0x4B15B10")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.NativeProperty("pointerType", false, UnityEngine.Bindings.TargetType.Field)]
	public extern PointerType pointerType
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4B15B90", Offset = "0x4B15B90", VA = "0x4B15B90")]
		get;
	}

	[Token(Token = "0x17000005")]
	[UnityEngine.Bindings.NativeProperty("button", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int button
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4B15BC0", Offset = "0x4B15BC0", VA = "0x4B15BC0")]
		get;
	}

	[Token(Token = "0x17000006")]
	[UnityEngine.Bindings.NativeProperty("modifiers", false, UnityEngine.Bindings.TargetType.Field)]
	public extern EventModifiers modifiers
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4B15BF0", Offset = "0x4B15BF0", VA = "0x4B15BF0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4B15C20", Offset = "0x4B15C20", VA = "0x4B15C20")]
		set;
	}

	[Token(Token = "0x17000007")]
	[UnityEngine.Bindings.NativeProperty("pressure", false, UnityEngine.Bindings.TargetType.Field)]
	public extern float pressure
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4B15C60", Offset = "0x4B15C60", VA = "0x4B15C60")]
		get;
	}

	[Token(Token = "0x17000008")]
	[UnityEngine.Bindings.NativeProperty("twist", false, UnityEngine.Bindings.TargetType.Field)]
	public extern float twist
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4B15C90", Offset = "0x4B15C90", VA = "0x4B15C90")]
		get;
	}

	[Token(Token = "0x17000009")]
	[UnityEngine.Bindings.NativeProperty("tilt", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 tilt
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4B15CC0", Offset = "0x4B15CC0", VA = "0x4B15CC0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700000A")]
	[UnityEngine.Bindings.NativeProperty("penStatus", false, UnityEngine.Bindings.TargetType.Field)]
	public extern PenStatus penStatus
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4B15D50", Offset = "0x4B15D50", VA = "0x4B15D50")]
		get;
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("clickCount", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int clickCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4B15D80", Offset = "0x4B15D80", VA = "0x4B15D80")]
		get;
	}

	[Token(Token = "0x1700000C")]
	[UnityEngine.Bindings.NativeProperty("character", false, UnityEngine.Bindings.TargetType.Field)]
	public extern char character
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4B15DB0", Offset = "0x4B15DB0", VA = "0x4B15DB0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4B15DE0", Offset = "0x4B15DE0", VA = "0x4B15DE0")]
		set;
	}

	[Token(Token = "0x1700000D")]
	[UnityEngine.Bindings.NativeProperty("keycode", false, UnityEngine.Bindings.TargetType.Field)]
	private extern KeyCode Internal_keyCode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4B15E20", Offset = "0x4B15E20", VA = "0x4B15E20")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4B15E50", Offset = "0x4B15E50", VA = "0x4B15E50")]
		set;
	}

	[Token(Token = "0x1700000E")]
	public KeyCode keyCode
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4B15E90", Offset = "0x4B15E90", VA = "0x4B15E90")]
		get
		{
			return default(KeyCode);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4B16070", Offset = "0x4B16070", VA = "0x4B16070")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	[UnityEngine.Bindings.NativeProperty("displayIndex", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int displayIndex
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4B160B0", Offset = "0x4B160B0", VA = "0x4B160B0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4B160E0", Offset = "0x4B160E0", VA = "0x4B160E0")]
		set;
	}

	[Token(Token = "0x17000010")]
	public extern EventType type
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4B16120", Offset = "0x4B16120", VA = "0x4B16120")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::GetType", HasExplicitThis = true)]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4B16150", Offset = "0x4B16150", VA = "0x4B16150")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::SetType", HasExplicitThis = true)]
		set;
	}

	[Token(Token = "0x17000011")]
	public extern string commandName
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4B16190", Offset = "0x4B16190", VA = "0x4B16190")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::GetCommandName", HasExplicitThis = true)]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4B161C0", Offset = "0x4B161C0", VA = "0x4B161C0")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::SetCommandName", HasExplicitThis = true)]
		set;
	}

	[Token(Token = "0x17000012")]
	public bool shift
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4B16680", Offset = "0x4B16680", VA = "0x4B16680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	public bool control
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4B166B0", Offset = "0x4B166B0", VA = "0x4B166B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000014")]
	public bool alt
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4B166F0", Offset = "0x4B166F0", VA = "0x4B166F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	public bool command
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4B16730", Offset = "0x4B16730", VA = "0x4B16730")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	public static Event current
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4B16770", Offset = "0x4B16770", VA = "0x4B16770")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4B167B0", Offset = "0x4B167B0", VA = "0x4B167B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool isKey
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4B16850", Offset = "0x4B16850", VA = "0x4B16850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	public bool isMouse
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4B15FE0", Offset = "0x4B15FE0", VA = "0x4B15FE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000019")]
	public bool isScrollWheel
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4B16030", Offset = "0x4B16030", VA = "0x4B16030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	internal bool isDirectManipulationDevice
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4B16890", Offset = "0x4B16890", VA = "0x4B16890")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4B16200", Offset = "0x4B16200", VA = "0x4B16200")]
	[UnityEngine.Bindings.NativeMethod("Use")]
	private extern void Internal_Use();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4B16230", Offset = "0x4B16230", VA = "0x4B16230")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::Internal_Create", IsThreadSafe = true)]
	private static extern IntPtr Internal_Create(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4B16260", Offset = "0x4B16260", VA = "0x4B16260")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4B16290", Offset = "0x4B16290", VA = "0x4B16290")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::GetTypeForControl", HasExplicitThis = true)]
	public extern EventType GetTypeForControl(int controlID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4B162D0", Offset = "0x4B162D0", VA = "0x4B162D0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::CopyFromPtr", IsThreadSafe = true, HasExplicitThis = true)]
	internal extern void CopyFromPtr(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4B16310", Offset = "0x4B16310", VA = "0x4B16310")]
	public static extern bool PopEvent([UnityEngine.Bindings.NotNull("ArgumentNullException")] Event outEvent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4B16340", Offset = "0x4B16340", VA = "0x4B16340")]
	private static extern void Internal_SetNativeEvent(IntPtr ptr);

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4B16370", Offset = "0x4B16370", VA = "0x4B16370")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_MakeMasterEventCurrent(int displayIndex)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4B164F0", Offset = "0x4B164F0", VA = "0x4B164F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern int GetDoubleClickTime();

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4B16520", Offset = "0x4B16520", VA = "0x4B16520")]
	public Event()
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4B164B0", Offset = "0x4B164B0", VA = "0x4B164B0")]
	public Event(int displayIndex)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4B16560", Offset = "0x4B16560", VA = "0x4B16560", Slot = "1")]
	~Event()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4B16620", Offset = "0x4B16620", VA = "0x4B16620")]
	internal void CopyFrom(Event e)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4B16900", Offset = "0x4B16900", VA = "0x4B16900")]
	public static Event KeyboardEvent(string key)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4B18630", Offset = "0x4B18630", VA = "0x4B18630", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4B18780", Offset = "0x4B18780", VA = "0x4B18780", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4B18A20", Offset = "0x4B18A20", VA = "0x4B18A20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4B19300", Offset = "0x4B19300", VA = "0x4B19300")]
	public void Use()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4B159C0", Offset = "0x4B159C0", VA = "0x4B159C0")]
	private static extern void get_mousePosition_Injected(Event _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4B15A40", Offset = "0x4B15A40", VA = "0x4B15A40")]
	private static extern void set_mousePosition_Injected(Event _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4B15AD0", Offset = "0x4B15AD0", VA = "0x4B15AD0")]
	private static extern void get_delta_Injected(Event _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4B15B50", Offset = "0x4B15B50", VA = "0x4B15B50")]
	private static extern void set_delta_Injected(Event _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4B15D10", Offset = "0x4B15D10", VA = "0x4B15D10")]
	private static extern void get_tilt_Injected(Event _unity_self, out Vector2 ret);
}
