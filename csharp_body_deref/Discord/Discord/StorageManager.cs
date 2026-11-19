// ==================== AoTTG2 cross-reference ====================
// Type: Discord.StorageManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/StorageManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200011E")]
public class StorageManager
{
	[Token(Token = "0x200011F")]
	internal struct FFIEvents
	{
	}

	[Token(Token = "0x2000120")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000121")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result ReadMethod(IntPtr methodsPtr, string name, byte[] data, int dataLen, ref uint read);

		[Token(Token = "0x2000122")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ReadAsyncCallback(IntPtr ptr, Result result, IntPtr dataPtr, int dataLen);

		[Token(Token = "0x2000123")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ReadAsyncMethod(IntPtr methodsPtr, string name, IntPtr callbackData, ReadAsyncCallback callback);

		[Token(Token = "0x2000124")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ReadAsyncPartialCallback(IntPtr ptr, Result result, IntPtr dataPtr, int dataLen);

		[Token(Token = "0x2000125")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ReadAsyncPartialMethod(IntPtr methodsPtr, string name, ulong offset, ulong length, IntPtr callbackData, ReadAsyncPartialCallback callback);

		[Token(Token = "0x2000126")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result WriteMethod(IntPtr methodsPtr, string name, byte[] data, int dataLen);

		[Token(Token = "0x2000127")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void WriteAsyncCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000128")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void WriteAsyncMethod(IntPtr methodsPtr, string name, byte[] data, int dataLen, IntPtr callbackData, WriteAsyncCallback callback);

		[Token(Token = "0x2000129")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result DeleteMethod(IntPtr methodsPtr, string name);

		[Token(Token = "0x200012A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result ExistsMethod(IntPtr methodsPtr, string name, ref bool exists);

		[Token(Token = "0x200012B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CountMethod(IntPtr methodsPtr, ref int count);

		[Token(Token = "0x200012C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result StatMethod(IntPtr methodsPtr, string name, ref FileStat stat);

		[Token(Token = "0x200012D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result StatAtMethod(IntPtr methodsPtr, int index, ref FileStat stat);

		[Token(Token = "0x200012E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetPathMethod(IntPtr methodsPtr, StringBuilder path);

		[Token(Token = "0x40001CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ReadMethod Read;

		[Token(Token = "0x40001CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal ReadAsyncMethod ReadAsync;

		[Token(Token = "0x40001CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal ReadAsyncPartialMethod ReadAsyncPartial;

		[Token(Token = "0x40001CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal WriteMethod Write;

		[Token(Token = "0x40001CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal WriteAsyncMethod WriteAsync;

		[Token(Token = "0x40001CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal DeleteMethod Delete;

		[Token(Token = "0x40001D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal ExistsMethod Exists;

		[Token(Token = "0x40001D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal CountMethod Count;

		[Token(Token = "0x40001D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal StatMethod Stat;

		[Token(Token = "0x40001D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal StatAtMethod StatAt;

		[Token(Token = "0x40001D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		internal GetPathMethod GetPath;
	}

	[Token(Token = "0x200012F")]
	public delegate void ReadAsyncHandler(Result result, byte[] data);

	[Token(Token = "0x2000130")]
	public delegate void ReadAsyncPartialHandler(Result result, byte[] data);

	[Token(Token = "0x2000131")]
	public delegate void WriteAsyncHandler(Result result);

	[Token(Token = "0x40001C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x40001C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x1700000D")]
	private FFIMethods Methods
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x315B5F0", Offset = "0x315A5F0", VA = "0x315B5F0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x315B720", Offset = "0x315A720", VA = "0x315B720")]
	internal StorageManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x315B7E0", Offset = "0x315A7E0", VA = "0x315B7E0")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x315B840", Offset = "0x315A840", VA = "0x315B840")]
	public uint Read(string name, byte[] data)
	{
		return default(uint);
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x315B250", Offset = "0x315A250", VA = "0x315B250")]
	[MonoPInvokeCallback]
	private static void ReadAsyncCallbackImpl(IntPtr ptr, Result result, IntPtr dataPtr, int dataLen)
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x315B8F0", Offset = "0x315A8F0", VA = "0x315B8F0")]
	public void ReadAsync(string name, ReadAsyncHandler callback)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x315B3B0", Offset = "0x315A3B0", VA = "0x315B3B0")]
	[MonoPInvokeCallback]
	private static void ReadAsyncPartialCallbackImpl(IntPtr ptr, Result result, IntPtr dataPtr, int dataLen)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x315BAD0", Offset = "0x315AAD0", VA = "0x315BAD0")]
	public void ReadAsyncPartial(string name, ulong offset, ulong length, ReadAsyncPartialHandler callback)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x315BCC0", Offset = "0x315ACC0", VA = "0x315BCC0")]
	public void Write(string name, byte[] data)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x315B510", Offset = "0x315A510", VA = "0x315B510")]
	[MonoPInvokeCallback]
	private static void WriteAsyncCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x315BD60", Offset = "0x315AD60", VA = "0x315BD60")]
	public void WriteAsync(string name, byte[] data, WriteAsyncHandler callback)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x315BF50", Offset = "0x315AF50", VA = "0x315BF50")]
	public void Delete(string name)
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x315BFE0", Offset = "0x315AFE0", VA = "0x315BFE0")]
	public bool Exists(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x315C080", Offset = "0x315B080", VA = "0x315C080")]
	public int Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x315C0D0", Offset = "0x315B0D0", VA = "0x315C0D0")]
	public FileStat Stat(string name)
	{
		return default(FileStat);
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x315C180", Offset = "0x315B180", VA = "0x315C180")]
	public FileStat StatAt(int index)
	{
		return default(FileStat);
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x315C230", Offset = "0x315B230", VA = "0x315C230")]
	public string GetPath()
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x315C310", Offset = "0x315B310", VA = "0x315C310")]
	public IEnumerable<FileStat> Files()
	{
		return null;
	}
}
