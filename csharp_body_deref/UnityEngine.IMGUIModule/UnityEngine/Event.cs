// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Event
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
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
		[Address(RVA = "0x2F85A60", Offset = "0x2F84060", VA = "0x182F85A60")]
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
		[Address(RVA = "0x2F85770", Offset = "0x2F83D70", VA = "0x182F85770")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x2F86170", Offset = "0x2F84770", VA = "0x182F86170")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("delta", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 delta
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x2F850B0", Offset = "0x2F836B0", VA = "0x182F850B0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x2F86020", Offset = "0x2F84620", VA = "0x182F86020")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.NativeProperty("pointerType", false, UnityEngine.Bindings.TargetType.Field)]
	public PointerType pointerType
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x2F85920", Offset = "0x2F83F20", VA = "0x182F85920")]
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
		[Address(RVA = "0x2F84C40", Offset = "0x2F83240", VA = "0x182F84C40")]
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
		[Address(RVA = "0x2F856C0", Offset = "0x2F83CC0", VA = "0x182F856C0")]
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
		[Address(RVA = "0x2F859C0", Offset = "0x2F83FC0", VA = "0x182F859C0")]
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
		[Address(RVA = "0x2F85C20", Offset = "0x2F84220", VA = "0x182F85C20")]
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
		[Address(RVA = "0x2F85B70", Offset = "0x2F84170", VA = "0x182F85B70")]
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
		[Address(RVA = "0x2F85880", Offset = "0x2F83E80", VA = "0x182F85880")]
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
		[Address(RVA = "0x2F84DE0", Offset = "0x2F833E0", VA = "0x182F84DE0")]
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
		[Address(RVA = "0x2F84D40", Offset = "0x2F83340", VA = "0x182F84D40")]
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
		[Address(RVA = "0x2F84B40", Offset = "0x2F83140", VA = "0x182F84B40")]
		get
		{
			return default(KeyCode);
		}
	}

	[Token(Token = "0x1700000E")]
	public KeyCode keyCode
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x2F85430", Offset = "0x2F83A30", VA = "0x182F85430")]
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
		[Address(RVA = "0x2F85160", Offset = "0x2F83760", VA = "0x182F85160")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x2F860C0", Offset = "0x2F846C0", VA = "0x182F860C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public EventType type
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x2F85CC0", Offset = "0x2F842C0", VA = "0x182F85CC0")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::GetType", HasExplicitThis = true)]
		get
		{
			return default(EventType);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x2F86210", Offset = "0x2F84810", VA = "0x182F86210")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::SetType", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public string commandName
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x2F84E90", Offset = "0x2F83490", VA = "0x182F84E90")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::GetCommandName", HasExplicitThis = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x2F85D70", Offset = "0x2F84370", VA = "0x182F85D70")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::SetCommandName", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public bool shift
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x2F85AC0", Offset = "0x2F840C0", VA = "0x182F85AC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	public bool control
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x2F84FC0", Offset = "0x2F835C0", VA = "0x182F84FC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000014")]
	public bool alt
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x2F84BA0", Offset = "0x2F831A0", VA = "0x182F84BA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	public bool command
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x2F84F60", Offset = "0x2F83560", VA = "0x182F84F60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	public bool capsLock
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x2F84CA0", Offset = "0x2F832A0", VA = "0x182F84CA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000017")]
	public bool numeric
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x2F857E0", Offset = "0x2F83DE0", VA = "0x182F857E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	public bool functionKey
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x2F851C0", Offset = "0x2F837C0", VA = "0x182F851C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000019")]
	public static Event current
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x2F85020", Offset = "0x2F83620", VA = "0x182F85020")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x2F85F20", Offset = "0x2F84520", VA = "0x182F85F20")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public bool isKey
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x2F852E0", Offset = "0x2F838E0", VA = "0x182F852E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001B")]
	public bool isMouse
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x2F85350", Offset = "0x2F83950", VA = "0x182F85350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001C")]
	public bool isScrollWheel
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x2F853D0", Offset = "0x2F839D0", VA = "0x182F853D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	internal bool isDirectManipulationDevice
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x2F85220", Offset = "0x2F83820", VA = "0x182F85220")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x2F84030", Offset = "0x2F82630", VA = "0x182F84030")]
	[UnityEngine.Bindings.NativeMethod("Use")]
	private void Internal_Use()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2F83DB0", Offset = "0x2F823B0", VA = "0x182F83DB0")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::Internal_Create", IsThreadSafe = true)]
	private static extern IntPtr Internal_Create(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2F83DF0", Offset = "0x2F823F0", VA = "0x182F83DF0")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x2F83D50", Offset = "0x2F82350", VA = "0x182F83D50")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::GetTypeForControl", HasExplicitThis = true)]
	public EventType GetTypeForControl(int controlID)
	{
		return default(EventType);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x2F835C0", Offset = "0x2F81BC0", VA = "0x182F835C0")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::CopyFromPtr", IsThreadSafe = true, HasExplicitThis = true)]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void CopyFromPtr(IntPtr ptr)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x2F840D0", Offset = "0x2F826D0", VA = "0x182F840D0")]
	public static bool PopEvent([UnityEngine.Bindings.NotNull] Event outEvent)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2F83AC0", Offset = "0x2F820C0", VA = "0x182F83AC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.InputForUIModule" })]
	internal static void GetEventAtIndex(int index, [UnityEngine.Bindings.NotNull] Event outEvent)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2F83B60", Offset = "0x2F82160", VA = "0x182F83B60")]
	public static extern int GetEventCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2F83FB0", Offset = "0x2F825B0", VA = "0x182F83FB0")]
	private static extern void Internal_SetNativeEvent(IntPtr ptr);

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x2F83E30", Offset = "0x2F82430", VA = "0x182F83E30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_MakeMasterEventCurrent(int displayIndex)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2F83A50", Offset = "0x2F82050", VA = "0x182F83A50")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEngine.InputForUIModule" })]
	internal static extern int GetDoubleClickTime();

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x2F84A70", Offset = "0x2F83070", VA = "0x182F84A70")]
	public Event()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x2F84AB0", Offset = "0x2F830B0", VA = "0x182F84AB0")]
	public Event(int displayIndex)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2F839C0", Offset = "0x2F81FC0", VA = "0x182F839C0", Slot = "1")]
	~Event()
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2F83620", Offset = "0x2F81C20", VA = "0x182F83620")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void CopyFrom(Event e)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x2F83B90", Offset = "0x2F82190", VA = "0x182F83B90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x2F83690", Offset = "0x2F81C90", VA = "0x182F83690", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x2F84160", Offset = "0x2F82760", VA = "0x182F84160", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x2F848E0", Offset = "0x2F82EE0", VA = "0x182F848E0")]
	public void Use()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2F85A20", Offset = "0x2F84020", VA = "0x182F85A20")]
	private static extern EventType get_rawType_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x2F85720", Offset = "0x2F83D20", VA = "0x182F85720")]
	private static extern void get_mousePosition_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x2F86120", Offset = "0x2F84720", VA = "0x182F86120")]
	private static extern void set_mousePosition_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2F85060", Offset = "0x2F83660", VA = "0x182F85060")]
	private static extern void get_delta_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2F85FD0", Offset = "0x2F845D0", VA = "0x182F85FD0")]
	private static extern void set_delta_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2F858E0", Offset = "0x2F83EE0", VA = "0x182F858E0")]
	private static extern PointerType get_pointerType_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2F84C00", Offset = "0x2F83200", VA = "0x182F84C00")]
	private static extern int get_button_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2F85680", Offset = "0x2F83C80", VA = "0x182F85680")]
	private static extern EventModifiers get_modifiers_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2F85980", Offset = "0x2F83F80", VA = "0x182F85980")]
	private static extern float get_pressure_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2F85BE0", Offset = "0x2F841E0", VA = "0x182F85BE0")]
	private static extern float get_twist_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2F85B20", Offset = "0x2F84120", VA = "0x182F85B20")]
	private static extern void get_tilt_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2F85840", Offset = "0x2F83E40", VA = "0x182F85840")]
	private static extern PenStatus get_penStatus_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x2F84DA0", Offset = "0x2F833A0", VA = "0x182F84DA0")]
	private static extern int get_clickCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2F84D00", Offset = "0x2F83300", VA = "0x182F84D00")]
	private static extern char get_character_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2F84B00", Offset = "0x2F83100", VA = "0x182F84B00")]
	private static extern KeyCode get_Internal_keyCode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2F85120", Offset = "0x2F83720", VA = "0x182F85120")]
	private static extern int get_displayIndex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2F86080", Offset = "0x2F84680", VA = "0x182F86080")]
	private static extern void set_displayIndex_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2F85C80", Offset = "0x2F84280", VA = "0x182F85C80")]
	private static extern EventType get_type_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2F861D0", Offset = "0x2F847D0", VA = "0x182F861D0")]
	private static extern void set_type_Injected(IntPtr _unity_self, EventType value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2F84E40", Offset = "0x2F83440", VA = "0x182F84E40")]
	private static extern void get_commandName_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2F85D20", Offset = "0x2F84320", VA = "0x182F85D20")]
	private static extern void set_commandName_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2F83FF0", Offset = "0x2F825F0", VA = "0x182F83FF0")]
	private static extern void Internal_Use_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x2F83D10", Offset = "0x2F82310", VA = "0x182F83D10")]
	private static extern EventType GetTypeForControl_Injected(IntPtr _unity_self, int controlID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2F83570", Offset = "0x2F81B70", VA = "0x182F83570")]
	private static extern void CopyFromPtr_Injected(IntPtr _unity_self, IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x2F84090", Offset = "0x2F82690", VA = "0x182F84090")]
	private static extern bool PopEvent_Injected(IntPtr outEvent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x2F83A80", Offset = "0x2F82080", VA = "0x182F83A80")]
	private static extern void GetEventAtIndex_Injected(int index, IntPtr outEvent);
}
