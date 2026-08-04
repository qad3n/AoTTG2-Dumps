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

[Token(Token = "0x2000096")]
public class RelationshipManager
{
	[Token(Token = "0x2000097")]
	internal struct FFIEvents
	{
		[Token(Token = "0x2000098")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void RefreshHandler(IntPtr ptr);

		[Token(Token = "0x2000099")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void RelationshipUpdateHandler(IntPtr ptr, ref Relationship relationship);

		[Token(Token = "0x400016F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal RefreshHandler OnRefresh;

		[Token(Token = "0x4000170")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal RelationshipUpdateHandler OnRelationshipUpdate;
	}

	[Token(Token = "0x200009A")]
	internal struct FFIMethods
	{
		[Token(Token = "0x200009B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate bool FilterCallback(IntPtr ptr, ref Relationship relationship);

		[Token(Token = "0x200009C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FilterMethod(IntPtr methodsPtr, IntPtr callbackData, FilterCallback callback);

		[Token(Token = "0x200009D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result CountMethod(IntPtr methodsPtr, ref int count);

		[Token(Token = "0x200009E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetMethod(IntPtr methodsPtr, long userId, ref Relationship relationship);

		[Token(Token = "0x200009F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetAtMethod(IntPtr methodsPtr, uint index, ref Relationship relationship);

		[Token(Token = "0x4000171")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal FilterMethod Filter;

		[Token(Token = "0x4000172")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal CountMethod Count;

		[Token(Token = "0x4000173")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GetMethod Get;

		[Token(Token = "0x4000174")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal GetAtMethod GetAt;
	}

	[Token(Token = "0x20000A0")]
	public delegate bool FilterHandler(ref Relationship relationship);

	[Token(Token = "0x20000A1")]
	public delegate void RefreshHandler();

	[Token(Token = "0x20000A2")]
	public delegate void RelationshipUpdateHandler(ref Relationship relationship);

	[Token(Token = "0x400016B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x400016C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x17000009")]
	private FFIMethods Methods
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x2338140", Offset = "0x2338140", VA = "0x2338140")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000006")]
	public event RefreshHandler OnRefresh
	{
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x2338250", Offset = "0x2338250", VA = "0x2338250")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x23382E0", Offset = "0x23382E0", VA = "0x23382E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000007")]
	public event RelationshipUpdateHandler OnRelationshipUpdate
	{
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x2338370", Offset = "0x2338370", VA = "0x2338370")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x2338400", Offset = "0x2338400", VA = "0x2338400")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x2332530", Offset = "0x2332530", VA = "0x2332530")]
	internal RelationshipManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x2338490", Offset = "0x2338490", VA = "0x2338490")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x2337E50", Offset = "0x2337E50", VA = "0x2337E50")]
	[MonoPInvokeCallback]
	private static bool FilterCallbackImpl(IntPtr ptr, ref Relationship relationship)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x23387B0", Offset = "0x23387B0", VA = "0x23387B0")]
	public void Filter(FilterHandler callback)
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x23389A0", Offset = "0x23389A0", VA = "0x23389A0")]
	public int Count()
	{
		return default(int);
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x2338A30", Offset = "0x2338A30", VA = "0x2338A30")]
	public Relationship Get(long userId)
	{
		return default(Relationship);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x2338B30", Offset = "0x2338B30", VA = "0x2338B30")]
	public Relationship GetAt(uint index)
	{
		return default(Relationship);
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x2337F30", Offset = "0x2337F30", VA = "0x2337F30")]
	[MonoPInvokeCallback]
	private static void OnRefreshImpl(IntPtr ptr)
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x2338030", Offset = "0x2338030", VA = "0x2338030")]
	[MonoPInvokeCallback]
	private static void OnRelationshipUpdateImpl(IntPtr ptr, ref Relationship relationship)
	{
	}
}
