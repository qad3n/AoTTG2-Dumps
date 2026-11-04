// ==================== AoTTG2 cross-reference ====================
// Type: Discord.RelationshipManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000094")]
public class RelationshipManager
{
	[Token(Token = "0x2000095")]
	internal struct FFIEvents
	{
		[Token(Token = "0x2000096")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void RefreshHandler(IntPtr ptr);

		[Token(Token = "0x2000097")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void RelationshipUpdateHandler(IntPtr ptr, ref Relationship relationship);

		[Token(Token = "0x400016A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal RefreshHandler OnRefresh;

		[Token(Token = "0x400016B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal RelationshipUpdateHandler OnRelationshipUpdate;
	}

	[Token(Token = "0x2000098")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000099")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate bool FilterCallback(IntPtr ptr, ref Relationship relationship);

		[Token(Token = "0x200009A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FilterMethod(IntPtr methodsPtr, IntPtr callbackData, FilterCallback callback);

		[Token(Token = "0x200009B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result CountMethod(IntPtr methodsPtr, ref int count);

		[Token(Token = "0x200009C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetMethod(IntPtr methodsPtr, long userId, ref Relationship relationship);

		[Token(Token = "0x200009D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetAtMethod(IntPtr methodsPtr, uint index, ref Relationship relationship);

		[Token(Token = "0x400016C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal FilterMethod Filter;

		[Token(Token = "0x400016D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal CountMethod Count;

		[Token(Token = "0x400016E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GetMethod Get;

		[Token(Token = "0x400016F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal GetAtMethod GetAt;
	}

	[Token(Token = "0x200009E")]
	public delegate bool FilterHandler(ref Relationship relationship);

	[Token(Token = "0x200009F")]
	public delegate void RefreshHandler();

	[Token(Token = "0x20000A0")]
	public delegate void RelationshipUpdateHandler(ref Relationship relationship);

	[Token(Token = "0x4000166")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x4000167")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x4000168")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private RefreshHandler m_OnRefresh;

	[Token(Token = "0x4000169")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private RelationshipUpdateHandler m_OnRelationshipUpdate;

	[Token(Token = "0x17000009")]
	private FFIMethods Methods
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x53A530", Offset = "0x538B30", VA = "0x18053A530")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000006")]
	public event RefreshHandler OnRefresh
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x53A3F0", Offset = "0x5389F0", VA = "0x18053A3F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x53A640", Offset = "0x538C40", VA = "0x18053A640")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000007")]
	public event RelationshipUpdateHandler OnRelationshipUpdate
	{
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x53A490", Offset = "0x538A90", VA = "0x18053A490")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x53A6E0", Offset = "0x538CE0", VA = "0x18053A6E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x53A320", Offset = "0x538920", VA = "0x18053A320")]
	internal RelationshipManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x539EE0", Offset = "0x5384E0", VA = "0x180539EE0")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x539B20", Offset = "0x538120", VA = "0x180539B20")]
	[MonoPInvokeCallback]
	private static bool FilterCallbackImpl(IntPtr ptr, ref Relationship relationship)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x539C10", Offset = "0x538210", VA = "0x180539C10")]
	public void Filter(FilterHandler callback)
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x539A80", Offset = "0x538080", VA = "0x180539A80")]
	public int Count()
	{
		return default(int);
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x539E20", Offset = "0x538420", VA = "0x180539E20")]
	public Relationship Get(long userId)
	{
		return default(Relationship);
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x539D60", Offset = "0x538360", VA = "0x180539D60")]
	public Relationship GetAt(uint index)
	{
		return default(Relationship);
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x53A0E0", Offset = "0x5386E0", VA = "0x18053A0E0")]
	[MonoPInvokeCallback]
	private static void OnRefreshImpl(IntPtr ptr)
	{
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x53A200", Offset = "0x538800", VA = "0x18053A200")]
	[MonoPInvokeCallback]
	private static void OnRelationshipUpdateImpl(IntPtr ptr, ref Relationship relationship)
	{
	}
}
