// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Event
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/Event.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("GUIEvent", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public sealed class Event
{
	[Token(Token = "0x2000003")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x697AF80", Offset = "0x6979F80", VA = "0x697AF80")]
		public static IntPtr ConvertToNative(Event e)
		{
			return default(IntPtr);
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000002")]
	internal const float scrollWheelDeltaPerTick = 3f;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static bool s_AllowOutsideOnGUI;

	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Event s_Current;

	[Token(Token = "0x4000005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Event s_MasterEvent;

	[Token(Token = "0x17000001")]
	[UnityEngine.Bindings.NativeProperty("type", false, UnityEngine.Bindings.TargetType.Field)]
	public EventType rawType
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x69780F0", Offset = "0x69770F0", VA = "0x69780F0")]
		get
		{
			return default(EventType);
		}
	}

	[Token(Token = "0x17000002")]
	[UnityEngine.Bindings.NativeProperty("mousePosition", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 mousePosition
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x6978180", Offset = "0x6977180", VA = "0x6978180")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x6978230", Offset = "0x6977230", VA = "0x6978230")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("delta", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 delta
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x69782E0", Offset = "0x69772E0", VA = "0x69782E0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x6978390", Offset = "0x6977390", VA = "0x6978390")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.NativeProperty("pointerType", false, UnityEngine.Bindings.TargetType.Field)]
	public PointerType pointerType
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x6978440", Offset = "0x6977440", VA = "0x6978440")]
		get
		{
			return default(PointerType);
		}
	}

	[Token(Token = "0x17000005")]
	[UnityEngine.Bindings.NativeProperty("button", false, UnityEngine.Bindings.TargetType.Field)]
	public int button
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x69784D0", Offset = "0x69774D0", VA = "0x69784D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	[UnityEngine.Bindings.NativeProperty("modifiers", false, UnityEngine.Bindings.TargetType.Field)]
	public EventModifiers modifiers
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x6978560", Offset = "0x6977560", VA = "0x6978560")]
		get
		{
			return default(EventModifiers);
		}
	}

	[Token(Token = "0x17000007")]
	[UnityEngine.Bindings.NativeProperty("pressure", false, UnityEngine.Bindings.TargetType.Field)]
	public float pressure
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x69785F0", Offset = "0x69775F0", VA = "0x69785F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000008")]
	[UnityEngine.Bindings.NativeProperty("twist", false, UnityEngine.Bindings.TargetType.Field)]
	public float twist
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x6978680", Offset = "0x6977680", VA = "0x6978680")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000009")]
	[UnityEngine.Bindings.NativeProperty("tilt", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 tilt
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x6978710", Offset = "0x6977710", VA = "0x6978710")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700000A")]
	[UnityEngine.Bindings.NativeProperty("penStatus", false, UnityEngine.Bindings.TargetType.Field)]
	public PenStatus penStatus
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x69787C0", Offset = "0x69777C0", VA = "0x69787C0")]
		get
		{
			return default(PenStatus);
		}
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("clickCount", false, UnityEngine.Bindings.TargetType.Field)]
	public int clickCount
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x6978850", Offset = "0x6977850", VA = "0x6978850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000C")]
	[UnityEngine.Bindings.NativeProperty("character", false, UnityEngine.Bindings.TargetType.Field)]
	public char character
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x69788E0", Offset = "0x69778E0", VA = "0x69788E0")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x1700000D")]
	[UnityEngine.Bindings.NativeProperty("keycode", false, UnityEngine.Bindings.TargetType.Field)]
	private KeyCode Internal_keyCode
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x6978970", Offset = "0x6977970", VA = "0x6978970")]
		get
		{
			return default(KeyCode);
		}
	}

	[Token(Token = "0x1700000E")]
	public KeyCode keyCode
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x6978A00", Offset = "0x6977A00", VA = "0x6978A00")]
		get
		{
			return default(KeyCode);
		}
	}

	[Token(Token = "0x1700000F")]
	[UnityEngine.Bindings.NativeProperty("displayIndex", false, UnityEngine.Bindings.TargetType.Field)]
	public int displayIndex
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x6978DB0", Offset = "0x6977DB0", VA = "0x6978DB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x6978E40", Offset = "0x6977E40", VA = "0x6978E40")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public EventType type
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x6978EE0", Offset = "0x6977EE0", VA = "0x6978EE0")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::GetType", HasExplicitThis = true)]
		get
		{
			return default(EventType);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x6978F70", Offset = "0x6977F70", VA = "0x6978F70")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::SetType", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public string commandName
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x6979010", Offset = "0x6978010", VA = "0x6979010")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::GetCommandName", HasExplicitThis = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x6979130", Offset = "0x6978130", VA = "0x6979130")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::SetCommandName", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public bool shift
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x6979A90", Offset = "0x6978A90", VA = "0x6979A90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	public bool control
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x6979AF0", Offset = "0x6978AF0", VA = "0x6979AF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000014")]
	public bool alt
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x6979B50", Offset = "0x6978B50", VA = "0x6979B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	public bool command
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x6979BB0", Offset = "0x6978BB0", VA = "0x6979BB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	public bool capsLock
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x6979C10", Offset = "0x6978C10", VA = "0x6979C10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000017")]
	public bool numeric
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x6979C70", Offset = "0x6978C70", VA = "0x6979C70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	public bool functionKey
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x6979CD0", Offset = "0x6978CD0", VA = "0x6979CD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000019")]
	public static Event current
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x6979D30", Offset = "0x6978D30", VA = "0x6979D30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x6979D70", Offset = "0x6978D70", VA = "0x6979D70")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public bool isKey
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x6979E10", Offset = "0x6978E10", VA = "0x6979E10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001B")]
	public bool isMouse
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x6978CD0", Offset = "0x6977CD0", VA = "0x6978CD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001C")]
	public bool isScrollWheel
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x6978D50", Offset = "0x6977D50", VA = "0x6978D50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	internal bool isDirectManipulationDevice
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x6979E70", Offset = "0x6978E70", VA = "0x6979E70")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x6979310", Offset = "0x6978310", VA = "0x6979310")]
	[UnityEngine.Bindings.NativeMethod("Use")]
	private void Internal_Use()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x69793A0", Offset = "0x69783A0", VA = "0x69793A0")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::Internal_Create", IsThreadSafe = true)]
	private static extern IntPtr Internal_Create(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x69793D0", Offset = "0x69783D0", VA = "0x69793D0")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x6979400", Offset = "0x6978400", VA = "0x6979400")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::GetTypeForControl", HasExplicitThis = true)]
	public EventType GetTypeForControl(int controlID)
	{
		return default(EventType);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x69794A0", Offset = "0x69784A0", VA = "0x69794A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::CopyFromPtr", IsThreadSafe = true, HasExplicitThis = true)]
	internal void CopyFromPtr(IntPtr ptr)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x6979540", Offset = "0x6978540", VA = "0x6979540")]
	public static bool PopEvent([UnityEngine.Bindings.NotNull] Event outEvent)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x6979610", Offset = "0x6978610", VA = "0x6979610")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.InputForUIModule" })]
	internal static void GetEventAtIndex(int index, [UnityEngine.Bindings.NotNull] Event outEvent)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x69796F0", Offset = "0x69786F0", VA = "0x69796F0")]
	public static extern int GetEventCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6979720", Offset = "0x6978720", VA = "0x6979720")]
	private static extern void Internal_SetNativeEvent(IntPtr ptr);

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x6979750", Offset = "0x6978750", VA = "0x6979750")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_MakeMasterEventCurrent(int displayIndex)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x69798F0", Offset = "0x69788F0", VA = "0x69798F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEngine.InputForUIModule" })]
	internal static extern int GetDoubleClickTime();

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x6979920", Offset = "0x6978920", VA = "0x6979920")]
	public Event()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x69798B0", Offset = "0x69788B0", VA = "0x69798B0")]
	public Event(int displayIndex)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x6979960", Offset = "0x6978960", VA = "0x6979960", Slot = "1")]
	~Event()
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x6979A20", Offset = "0x6978A20", VA = "0x6979A20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void CopyFrom(Event e)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x6979F30", Offset = "0x6978F30", VA = "0x6979F30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x697A140", Offset = "0x6979140", VA = "0x697A140", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x697A430", Offset = "0x6979430", VA = "0x697A430", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x697AD70", Offset = "0x6979D70", VA = "0x697AD70")]
	public void Use()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x6978150", Offset = "0x6977150", VA = "0x6978150")]
	private static extern EventType get_rawType_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x69781F0", Offset = "0x69771F0", VA = "0x69781F0")]
	private static extern void get_mousePosition_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x69782A0", Offset = "0x69772A0", VA = "0x69782A0")]
	private static extern void set_mousePosition_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x6978350", Offset = "0x6977350", VA = "0x6978350")]
	private static extern void get_delta_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x6978400", Offset = "0x6977400", VA = "0x6978400")]
	private static extern void set_delta_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x69784A0", Offset = "0x69774A0", VA = "0x69784A0")]
	private static extern PointerType get_pointerType_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x6978530", Offset = "0x6977530", VA = "0x6978530")]
	private static extern int get_button_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x69785C0", Offset = "0x69775C0", VA = "0x69785C0")]
	private static extern EventModifiers get_modifiers_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x6978650", Offset = "0x6977650", VA = "0x6978650")]
	private static extern float get_pressure_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x69786E0", Offset = "0x69776E0", VA = "0x69786E0")]
	private static extern float get_twist_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x6978780", Offset = "0x6977780", VA = "0x6978780")]
	private static extern void get_tilt_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x6978820", Offset = "0x6977820", VA = "0x6978820")]
	private static extern PenStatus get_penStatus_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x69788B0", Offset = "0x69778B0", VA = "0x69788B0")]
	private static extern int get_clickCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x6978940", Offset = "0x6977940", VA = "0x6978940")]
	private static extern char get_character_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x69789D0", Offset = "0x69779D0", VA = "0x69789D0")]
	private static extern KeyCode get_Internal_keyCode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x6978E10", Offset = "0x6977E10", VA = "0x6978E10")]
	private static extern int get_displayIndex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x6978EA0", Offset = "0x6977EA0", VA = "0x6978EA0")]
	private static extern void set_displayIndex_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6978F40", Offset = "0x6977F40", VA = "0x6978F40")]
	private static extern EventType get_type_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x6978FD0", Offset = "0x6977FD0", VA = "0x6978FD0")]
	private static extern void set_type_Injected(IntPtr _unity_self, EventType value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x69790F0", Offset = "0x69780F0", VA = "0x69790F0")]
	private static extern void get_commandName_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x69792D0", Offset = "0x69782D0", VA = "0x69792D0")]
	private static extern void set_commandName_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x6979370", Offset = "0x6978370", VA = "0x6979370")]
	private static extern void Internal_Use_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x6979460", Offset = "0x6978460", VA = "0x6979460")]
	private static extern EventType GetTypeForControl_Injected(IntPtr _unity_self, int controlID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x6979500", Offset = "0x6978500", VA = "0x6979500")]
	private static extern void CopyFromPtr_Injected(IntPtr _unity_self, IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x69795E0", Offset = "0x69785E0", VA = "0x69795E0")]
	private static extern bool PopEvent_Injected(IntPtr outEvent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x69796B0", Offset = "0x69786B0", VA = "0x69796B0")]
	private static extern void GetEventAtIndex_Injected(int index, IntPtr outEvent);
}
