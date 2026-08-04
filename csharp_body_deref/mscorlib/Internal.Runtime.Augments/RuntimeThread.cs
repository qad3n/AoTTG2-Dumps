// ==================== AoTTG2 cross-reference ====================
// Type: Internal.Runtime.Augments.RuntimeThread
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;

namespace Internal.Runtime.Augments;

[Token(Token = "0x2000064")]
internal sealed class RuntimeThread
{
	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int OptimalMaxSpinWaitsPerSpinIteration;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x10")]
	private readonly Thread thread;

	[Token(Token = "0x1700003C")]
	public bool IsBackground
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x3AF36F0", Offset = "0x3AF36F0", VA = "0x3AF36F0")]
		set
		{
		}
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x3AF3630", Offset = "0x3AF3630", VA = "0x3AF3630")]
	private RuntimeThread(Thread t)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x3AF3660", Offset = "0x3AF3660", VA = "0x3AF3660")]
	public static Internal.Runtime.Augments.RuntimeThread Create(ParameterizedThreadStart start, int maxStackSize)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x3AF3710", Offset = "0x3AF3710", VA = "0x3AF3710")]
	public void Start(object state)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x3AF3730", Offset = "0x3AF3730", VA = "0x3AF3730")]
	public static void Sleep(int millisecondsTimeout)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x3AF3740", Offset = "0x3AF3740", VA = "0x3AF3740")]
	public static bool Yield()
	{
		return default(bool);
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x3AF3750", Offset = "0x3AF3750", VA = "0x3AF3750")]
	public static bool SpinWait(int iterations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x3AF3760", Offset = "0x3AF3760", VA = "0x3AF3760")]
	public static int GetCurrentProcessorId()
	{
		return default(int);
	}
}
