// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsBioMono
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Mono.Util;

namespace Mono.Btls;

[Token(Token = "0x200006F")]
internal class MonoBtlsBioMono : MonoBtlsBio
{
	[Token(Token = "0x2000070")]
	private enum ControlCommand
	{
		[Token(Token = "0x400013C")]
		Flush = 1
	}

	[Token(Token = "0x2000071")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate int BioReadFunc(IntPtr bio, IntPtr data, int dataLength, out int wantMore);

	[Token(Token = "0x2000072")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate int BioWriteFunc(IntPtr bio, IntPtr data, int dataLength);

	[Token(Token = "0x2000073")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate long BioControlFunc(IntPtr bio, ControlCommand command, long arg);

	[Token(Token = "0x4000132")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GCHandle handle;

	[Token(Token = "0x4000133")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IntPtr instance;

	[Token(Token = "0x4000134")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private BioReadFunc readFunc;

	[Token(Token = "0x4000135")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private BioWriteFunc writeFunc;

	[Token(Token = "0x4000136")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private BioControlFunc controlFunc;

	[Token(Token = "0x4000137")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private IntPtr readFuncPtr;

	[Token(Token = "0x4000138")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private IntPtr writeFuncPtr;

	[Token(Token = "0x4000139")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private IntPtr controlFuncPtr;

	[Token(Token = "0x400013A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private IMonoBtlsBioMono backend;

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x2495570", Offset = "0x2493B70", VA = "0x182495570")]
	public MonoBtlsBioMono(IMonoBtlsBioMono backend)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6000191")]
	[Address(RVA = "0x2495A70", Offset = "0x2494070", VA = "0x182495A70")]
	private static extern IntPtr mono_btls_bio_mono_new();

	[PreserveSig]
	[Token(Token = "0x6000192")]
	[Address(RVA = "0x24959D0", Offset = "0x2493FD0", VA = "0x1824959D0")]
	private static extern void mono_btls_bio_mono_initialize(IntPtr handle, IntPtr instance, IntPtr readFunc, IntPtr writeFunc, IntPtr controlFunc);

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x2494D20", Offset = "0x2493320", VA = "0x182494D20")]
	private long Control(ControlCommand command, long arg)
	{
		return default(long);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x2495060", Offset = "0x2493660", VA = "0x182495060")]
	private int OnRead(IntPtr data, int dataLength, out int wantMore)
	{
		return default(int);
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x2494DC0", Offset = "0x24933C0", VA = "0x182494DC0")]
	[MonoPInvokeCallback(typeof(BioReadFunc))]
	private static int OnRead(IntPtr instance, IntPtr data, int dataLength, out int wantMore)
	{
		return default(int);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x24951C0", Offset = "0x24937C0", VA = "0x1824951C0")]
	private int OnWrite(IntPtr data, int dataLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x2495300", Offset = "0x2493900", VA = "0x182495300")]
	[MonoPInvokeCallback(typeof(BioWriteFunc))]
	private static int OnWrite(IntPtr instance, IntPtr data, int dataLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x2494B50", Offset = "0x2493150", VA = "0x182494B50")]
	[MonoPInvokeCallback(typeof(BioControlFunc))]
	private static long Control(IntPtr instance, ControlCommand command, long arg)
	{
		return default(long);
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x2494AA0", Offset = "0x24930A0", VA = "0x182494AA0", Slot = "5")]
	protected override void Close()
	{
	}
}
