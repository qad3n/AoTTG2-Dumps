// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.Event
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.InputForUI;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x2000005")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct Event : IEventProperties
{
	[Token(Token = "0x2000006")]
	public enum Type
	{
		[Token(Token = "0x400002C")]
		Invalid,
		[Token(Token = "0x400002D")]
		KeyEvent,
		[Token(Token = "0x400002E")]
		PointerEvent,
		[Token(Token = "0x400002F")]
		TextInputEvent,
		[Token(Token = "0x4000030")]
		IMECompositionEvent,
		[Token(Token = "0x4000031")]
		CommandEvent,
		[Token(Token = "0x4000032")]
		NavigationEvent
	}

	[Token(Token = "0x2000007")]
	private interface IMapFn<TOutputType>
	{
		[Token(Token = "0x600001D")]
		TOutputType Map<TEventType>(ref TEventType ev) where TEventType : IEventProperties;
	}

	[Token(Token = "0x2000008")]
	private struct MapAsObject : IMapFn<IEventProperties>
	{
		[Token(Token = "0x600001E")]
		public IEventProperties Map<TEventType>(ref TEventType ev) where TEventType : IEventProperties
		{
			return null;
		}
	}

	[Token(Token = "0x2000009")]
	private struct MapAsEventSource : IMapFn<EventSource>
	{
		[Token(Token = "0x600001F")]
		public EventSource Map<TEventType>(ref TEventType ev) where TEventType : IEventProperties
		{
			return default(EventSource);
		}
	}

	[Token(Token = "0x200000A")]
	private struct MapAsEventModifiers : IMapFn<EventModifiers>
	{
		[Token(Token = "0x6000020")]
		public EventModifiers Map<TEventType>(ref TEventType ev) where TEventType : IEventProperties
		{
			return default(EventModifiers);
		}
	}

	[Token(Token = "0x4000023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static Type[] TypesWithState;

	[Token(Token = "0x4000024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Type _type;

	[Token(Token = "0x4000025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private object _managedEvent;

	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private KeyEvent _keyEvent;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private PointerEvent _pointerEvent;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private TextInputEvent _textInputEvent;

	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CommandEvent _commandEvent;

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private NavigationEvent _navigationEvent;

	[Token(Token = "0x17000005")]
	public Type type
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x69B3810", Offset = "0x69B2810", VA = "0x69B3810")]
		get
		{
			return default(Type);
		}
	}

	[Token(Token = "0x17000006")]
	private IEventProperties asObject
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x69B3820", Offset = "0x69B2820", VA = "0x69B3820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	public EventSource eventSource
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x69B3880", Offset = "0x69B2880", VA = "0x69B3880", Slot = "4")]
		get
		{
			return default(EventSource);
		}
	}

	[Token(Token = "0x17000008")]
	public EventModifiers eventModifiers
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x69B38E0", Offset = "0x69B28E0", VA = "0x69B38E0", Slot = "5")]
		get
		{
			return default(EventModifiers);
		}
	}

	[Token(Token = "0x17000009")]
	public KeyEvent asKeyEvent
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x69B43C0", Offset = "0x69B33C0", VA = "0x69B43C0")]
		get
		{
			return default(KeyEvent);
		}
	}

	[Token(Token = "0x1700000A")]
	public PointerEvent asPointerEvent
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x69B45A0", Offset = "0x69B35A0", VA = "0x69B45A0")]
		get
		{
			return default(PointerEvent);
		}
	}

	[Token(Token = "0x1700000B")]
	public TextInputEvent asTextInputEvent
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x69B4770", Offset = "0x69B3770", VA = "0x69B4770")]
		get
		{
			return default(TextInputEvent);
		}
	}

	[Token(Token = "0x1700000C")]
	public IMECompositionEvent asIMECompositionEvent
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x69B4950", Offset = "0x69B3950", VA = "0x69B4950")]
		get
		{
			return default(IMECompositionEvent);
		}
	}

	[Token(Token = "0x1700000D")]
	public CommandEvent asCommandEvent
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x69B4B20", Offset = "0x69B3B20", VA = "0x69B4B20")]
		get
		{
			return default(CommandEvent);
		}
	}

	[Token(Token = "0x1700000E")]
	public NavigationEvent asNavigationEvent
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x69B4CC0", Offset = "0x69B3CC0", VA = "0x69B4CC0")]
		get
		{
			return default(NavigationEvent);
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x69B3940", Offset = "0x69B2940", VA = "0x69B3940")]
	private void Ensure(Type t)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x69B39C0", Offset = "0x69B29C0", VA = "0x69B39C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x69B4310", Offset = "0x69B3310", VA = "0x69B4310")]
	public static Event From(KeyEvent keyEvent)
	{
		return default(Event);
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x69B44F0", Offset = "0x69B34F0", VA = "0x69B44F0")]
	public static Event From(PointerEvent pointerEvent)
	{
		return default(Event);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x69B46F0", Offset = "0x69B36F0", VA = "0x69B46F0")]
	public static Event From(TextInputEvent textInputEvent)
	{
		return default(Event);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x69B4880", Offset = "0x69B3880", VA = "0x69B4880")]
	public static Event From(IMECompositionEvent imeCompositionEvent)
	{
		return default(Event);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x69B4AA0", Offset = "0x69B3AA0", VA = "0x69B4AA0")]
	public static Event From(CommandEvent commandEvent)
	{
		return default(Event);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x69B4C30", Offset = "0x69B3C30", VA = "0x69B4C30")]
	public static Event From(NavigationEvent navigationEvent)
	{
		return default(Event);
	}

	[Token(Token = "0x600001A")]
	private TOutputType Map<TOutputType, TMapType>(TMapType fn) where TMapType : IMapFn<TOutputType>
	{
		return (TOutputType)null;
	}

	[Token(Token = "0x600001B")]
	private TOutputType Map<TOutputType, TMapType>() where TMapType : IMapFn<TOutputType>, new()
	{
		return (TOutputType)null;
	}
}
