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
		[Address(RVA = "0x4E3D500", Offset = "0x4E3D500", VA = "0x4E3D500")]
		get;
	}

	[Token(Token = "0x17000002")]
	[UnityEngine.Bindings.NativeProperty("mousePosition", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 mousePosition
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4E3D530", Offset = "0x4E3D530", VA = "0x4E3D530")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4E3D5C0", Offset = "0x4E3D5C0", VA = "0x4E3D5C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("delta", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 delta
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4E3D640", Offset = "0x4E3D640", VA = "0x4E3D640")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4E3D6D0", Offset = "0x4E3D6D0", VA = "0x4E3D6D0")]
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
		[Address(RVA = "0x4E3D750", Offset = "0x4E3D750", VA = "0x4E3D750")]
		get;
	}

	[Token(Token = "0x17000005")]
	[UnityEngine.Bindings.NativeProperty("button", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int button
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4E3D780", Offset = "0x4E3D780", VA = "0x4E3D780")]
		get;
	}

	[Token(Token = "0x17000006")]
	[UnityEngine.Bindings.NativeProperty("modifiers", false, UnityEngine.Bindings.TargetType.Field)]
	public extern EventModifiers modifiers
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4E3D7B0", Offset = "0x4E3D7B0", VA = "0x4E3D7B0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4E3D7E0", Offset = "0x4E3D7E0", VA = "0x4E3D7E0")]
		set;
	}

	[Token(Token = "0x17000007")]
	[UnityEngine.Bindings.NativeProperty("pressure", false, UnityEngine.Bindings.TargetType.Field)]
	public extern float pressure
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4E3D820", Offset = "0x4E3D820", VA = "0x4E3D820")]
		get;
	}

	[Token(Token = "0x17000008")]
	[UnityEngine.Bindings.NativeProperty("twist", false, UnityEngine.Bindings.TargetType.Field)]
	public extern float twist
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4E3D850", Offset = "0x4E3D850", VA = "0x4E3D850")]
		get;
	}

	[Token(Token = "0x17000009")]
	[UnityEngine.Bindings.NativeProperty("tilt", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 tilt
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4E3D880", Offset = "0x4E3D880", VA = "0x4E3D880")]
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
		[Address(RVA = "0x4E3D910", Offset = "0x4E3D910", VA = "0x4E3D910")]
		get;
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("clickCount", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int clickCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4E3D940", Offset = "0x4E3D940", VA = "0x4E3D940")]
		get;
	}

	[Token(Token = "0x1700000C")]
	[UnityEngine.Bindings.NativeProperty("character", false, UnityEngine.Bindings.TargetType.Field)]
	public extern char character
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4E3D970", Offset = "0x4E3D970", VA = "0x4E3D970")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4E3D9A0", Offset = "0x4E3D9A0", VA = "0x4E3D9A0")]
		set;
	}

	[Token(Token = "0x1700000D")]
	[UnityEngine.Bindings.NativeProperty("keycode", false, UnityEngine.Bindings.TargetType.Field)]
	private extern KeyCode Internal_keyCode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4E3D9E0", Offset = "0x4E3D9E0", VA = "0x4E3D9E0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4E3DA10", Offset = "0x4E3DA10", VA = "0x4E3DA10")]
		set;
	}

	[Token(Token = "0x1700000E")]
	public KeyCode keyCode
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4E3DA50", Offset = "0x4E3DA50", VA = "0x4E3DA50")]
		get
		{
			return default(KeyCode);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4E3DC30", Offset = "0x4E3DC30", VA = "0x4E3DC30")]
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
		[Address(RVA = "0x4E3DC70", Offset = "0x4E3DC70", VA = "0x4E3DC70")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4E3DCA0", Offset = "0x4E3DCA0", VA = "0x4E3DCA0")]
		set;
	}

	[Token(Token = "0x17000010")]
	public extern EventType type
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4E3DCE0", Offset = "0x4E3DCE0", VA = "0x4E3DCE0")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::GetType", HasExplicitThis = true)]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4E3DD10", Offset = "0x4E3DD10", VA = "0x4E3DD10")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::SetType", HasExplicitThis = true)]
		set;
	}

	[Token(Token = "0x17000011")]
	public extern string commandName
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4E3DD50", Offset = "0x4E3DD50", VA = "0x4E3DD50")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::GetCommandName", HasExplicitThis = true)]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4E3DD80", Offset = "0x4E3DD80", VA = "0x4E3DD80")]
		[UnityEngine.Bindings.FreeFunction("GUIEvent::SetCommandName", HasExplicitThis = true)]
		set;
	}

	[Token(Token = "0x17000012")]
	public bool shift
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4E3E240", Offset = "0x4E3E240", VA = "0x4E3E240")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	public bool control
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4E3E270", Offset = "0x4E3E270", VA = "0x4E3E270")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000014")]
	public bool alt
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4E3E2B0", Offset = "0x4E3E2B0", VA = "0x4E3E2B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	public bool command
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4E3E2F0", Offset = "0x4E3E2F0", VA = "0x4E3E2F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	public static Event current
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4E3E330", Offset = "0x4E3E330", VA = "0x4E3E330")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4E3E370", Offset = "0x4E3E370", VA = "0x4E3E370")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool isKey
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4E3E410", Offset = "0x4E3E410", VA = "0x4E3E410")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	public bool isMouse
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4E3DBA0", Offset = "0x4E3DBA0", VA = "0x4E3DBA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000019")]
	public bool isScrollWheel
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4E3DBF0", Offset = "0x4E3DBF0", VA = "0x4E3DBF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	internal bool isDirectManipulationDevice
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4E3E450", Offset = "0x4E3E450", VA = "0x4E3E450")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4E3DDC0", Offset = "0x4E3DDC0", VA = "0x4E3DDC0")]
	[UnityEngine.Bindings.NativeMethod("Use")]
	private extern void Internal_Use();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4E3DDF0", Offset = "0x4E3DDF0", VA = "0x4E3DDF0")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::Internal_Create", IsThreadSafe = true)]
	private static extern IntPtr Internal_Create(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4E3DE20", Offset = "0x4E3DE20", VA = "0x4E3DE20")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4E3DE50", Offset = "0x4E3DE50", VA = "0x4E3DE50")]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::GetTypeForControl", HasExplicitThis = true)]
	public extern EventType GetTypeForControl(int controlID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4E3DE90", Offset = "0x4E3DE90", VA = "0x4E3DE90")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	[UnityEngine.Bindings.FreeFunction("GUIEvent::CopyFromPtr", IsThreadSafe = true, HasExplicitThis = true)]
	internal extern void CopyFromPtr(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4E3DED0", Offset = "0x4E3DED0", VA = "0x4E3DED0")]
	public static extern bool PopEvent([UnityEngine.Bindings.NotNull("ArgumentNullException")] Event outEvent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4E3DF00", Offset = "0x4E3DF00", VA = "0x4E3DF00")]
	private static extern void Internal_SetNativeEvent(IntPtr ptr);

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4E3DF30", Offset = "0x4E3DF30", VA = "0x4E3DF30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_MakeMasterEventCurrent(int displayIndex)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4E3E0B0", Offset = "0x4E3E0B0", VA = "0x4E3E0B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern int GetDoubleClickTime();

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4E3E0E0", Offset = "0x4E3E0E0", VA = "0x4E3E0E0")]
	public Event()
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4E3E070", Offset = "0x4E3E070", VA = "0x4E3E070")]
	public Event(int displayIndex)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4E3E120", Offset = "0x4E3E120", VA = "0x4E3E120", Slot = "1")]
	~Event()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4E3E1E0", Offset = "0x4E3E1E0", VA = "0x4E3E1E0")]
	internal void CopyFrom(Event e)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4E3E4C0", Offset = "0x4E3E4C0", VA = "0x4E3E4C0")]
	public static Event KeyboardEvent(string key)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4E401F0", Offset = "0x4E401F0", VA = "0x4E401F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4E40340", Offset = "0x4E40340", VA = "0x4E40340", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4E405E0", Offset = "0x4E405E0", VA = "0x4E405E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4E40EC0", Offset = "0x4E40EC0", VA = "0x4E40EC0")]
	public void Use()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4E3D580", Offset = "0x4E3D580", VA = "0x4E3D580")]
	private static extern void get_mousePosition_Injected(Event _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4E3D600", Offset = "0x4E3D600", VA = "0x4E3D600")]
	private static extern void set_mousePosition_Injected(Event _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4E3D690", Offset = "0x4E3D690", VA = "0x4E3D690")]
	private static extern void get_delta_Injected(Event _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4E3D710", Offset = "0x4E3D710", VA = "0x4E3D710")]
	private static extern void set_delta_Injected(Event _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4E3D8D0", Offset = "0x4E3D8D0", VA = "0x4E3D8D0")]
	private static extern void get_tilt_Injected(Event _unity_self, out Vector2 ret);
}
