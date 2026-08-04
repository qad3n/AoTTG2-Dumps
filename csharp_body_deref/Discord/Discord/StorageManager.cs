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

[Token(Token = "0x2000120")]
public class StorageManager
{
	[Token(Token = "0x2000121")]
	internal struct FFIEvents
	{
	}

	[Token(Token = "0x2000122")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000123")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result ReadMethod(IntPtr methodsPtr, string name, byte[] data, int dataLen, ref uint read);

		[Token(Token = "0x2000124")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ReadAsyncCallback(IntPtr ptr, Result result, IntPtr dataPtr, int dataLen);

		[Token(Token = "0x2000125")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ReadAsyncMethod(IntPtr methodsPtr, string name, IntPtr callbackData, ReadAsyncCallback callback);

		[Token(Token = "0x2000126")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ReadAsyncPartialCallback(IntPtr ptr, Result result, IntPtr dataPtr, int dataLen);

		[Token(Token = "0x2000127")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ReadAsyncPartialMethod(IntPtr methodsPtr, string name, ulong offset, ulong length, IntPtr callbackData, ReadAsyncPartialCallback callback);

		[Token(Token = "0x2000128")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result WriteMethod(IntPtr methodsPtr, string name, byte[] data, int dataLen);

		[Token(Token = "0x2000129")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void WriteAsyncCallback(IntPtr ptr, Result result);

		[Token(Token = "0x200012A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void WriteAsyncMethod(IntPtr methodsPtr, string name, byte[] data, int dataLen, IntPtr callbackData, WriteAsyncCallback callback);

		[Token(Token = "0x200012B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result DeleteMethod(IntPtr methodsPtr, string name);

		[Token(Token = "0x200012C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result ExistsMethod(IntPtr methodsPtr, string name, ref bool exists);

		[Token(Token = "0x200012D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CountMethod(IntPtr methodsPtr, ref int count);

		[Token(Token = "0x200012E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result StatMethod(IntPtr methodsPtr, string name, ref FileStat stat);

		[Token(Token = "0x200012F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result StatAtMethod(IntPtr methodsPtr, int index, ref FileStat stat);

		[Token(Token = "0x2000130")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetPathMethod(IntPtr methodsPtr, StringBuilder path);

		[Token(Token = "0x40001CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ReadMethod Read;

		[Token(Token = "0x40001D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal ReadAsyncMethod ReadAsync;

		[Token(Token = "0x40001D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal ReadAsyncPartialMethod ReadAsyncPartial;

		[Token(Token = "0x40001D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal WriteMethod Write;

		[Token(Token = "0x40001D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal WriteAsyncMethod WriteAsync;

		[Token(Token = "0x40001D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal DeleteMethod Delete;

		[Token(Token = "0x40001D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal ExistsMethod Exists;

		[Token(Token = "0x40001D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal CountMethod Count;

		[Token(Token = "0x40001D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal StatMethod Stat;

		[Token(Token = "0x40001D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal StatAtMethod StatAt;

		[Token(Token = "0x40001D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		internal GetPathMethod GetPath;
	}

	[Token(Token = "0x2000131")]
	public delegate void ReadAsyncHandler(Result result, byte[] data);

	[Token(Token = "0x2000132")]
	public delegate void ReadAsyncPartialHandler(Result result, byte[] data);

	[Token(Token = "0x2000133")]
	public delegate void WriteAsyncHandler(Result result);

	[Token(Token = "0x40001CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x40001CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x1700000D")]
	private FFIMethods Methods
	{
		[Token(Token = "0x600041D")]
		[Address(RVA = "0x234AB60", Offset = "0x234AB60", VA = "0x234AB60")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x234AC90", Offset = "0x234AC90", VA = "0x234AC90")]
	internal StorageManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x234AD50", Offset = "0x234AD50", VA = "0x234AD50")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x234ADB0", Offset = "0x234ADB0", VA = "0x234ADB0")]
	public uint Read(string name, byte[] data)
	{
		return default(uint);
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x234A7C0", Offset = "0x234A7C0", VA = "0x234A7C0")]
	[MonoPInvokeCallback]
	private static void ReadAsyncCallbackImpl(IntPtr ptr, Result result, IntPtr dataPtr, int dataLen)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x234AE60", Offset = "0x234AE60", VA = "0x234AE60")]
	public void ReadAsync(string name, ReadAsyncHandler callback)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x234A920", Offset = "0x234A920", VA = "0x234A920")]
	[MonoPInvokeCallback]
	private static void ReadAsyncPartialCallbackImpl(IntPtr ptr, Result result, IntPtr dataPtr, int dataLen)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x234B050", Offset = "0x234B050", VA = "0x234B050")]
	public void ReadAsyncPartial(string name, ulong offset, ulong length, ReadAsyncPartialHandler callback)
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x234B250", Offset = "0x234B250", VA = "0x234B250")]
	public void Write(string name, byte[] data)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x234AA80", Offset = "0x234AA80", VA = "0x234AA80")]
	[MonoPInvokeCallback]
	private static void WriteAsyncCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x234B2F0", Offset = "0x234B2F0", VA = "0x234B2F0")]
	public void WriteAsync(string name, byte[] data, WriteAsyncHandler callback)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x234B4F0", Offset = "0x234B4F0", VA = "0x234B4F0")]
	public void Delete(string name)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x234B580", Offset = "0x234B580", VA = "0x234B580")]
	public bool Exists(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x234B620", Offset = "0x234B620", VA = "0x234B620")]
	public int Count()
	{
		return default(int);
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x234B670", Offset = "0x234B670", VA = "0x234B670")]
	public FileStat Stat(string name)
	{
		return default(FileStat);
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x234B720", Offset = "0x234B720", VA = "0x234B720")]
	public FileStat StatAt(int index)
	{
		return default(FileStat);
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x234B7D0", Offset = "0x234B7D0", VA = "0x234B7D0")]
	public string GetPath()
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x234B8B0", Offset = "0x234B8B0", VA = "0x234B8B0")]
	public IEnumerable<FileStat> Files()
	{
		return null;
	}
}
