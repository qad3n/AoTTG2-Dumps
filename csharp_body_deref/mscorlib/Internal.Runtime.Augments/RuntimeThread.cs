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
		[Address(RVA = "0x4E0DBD0", Offset = "0x4E0DBD0", VA = "0x4E0DBD0")]
		set
		{
		}
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4E0DB10", Offset = "0x4E0DB10", VA = "0x4E0DB10")]
	private RuntimeThread(Thread t)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4E0DB40", Offset = "0x4E0DB40", VA = "0x4E0DB40")]
	public static Internal.Runtime.Augments.RuntimeThread Create(ParameterizedThreadStart start, int maxStackSize)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4E0DBF0", Offset = "0x4E0DBF0", VA = "0x4E0DBF0")]
	public void Start(object state)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4E0DC10", Offset = "0x4E0DC10", VA = "0x4E0DC10")]
	public static void Sleep(int millisecondsTimeout)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x4E0DC20", Offset = "0x4E0DC20", VA = "0x4E0DC20")]
	public static bool Yield()
	{
		return default(bool);
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4E0DC30", Offset = "0x4E0DC30", VA = "0x4E0DC30")]
	public static bool SpinWait(int iterations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4E0DC40", Offset = "0x4E0DC40", VA = "0x4E0DC40")]
	public static int GetCurrentProcessorId()
	{
		return default(int);
	}
}
