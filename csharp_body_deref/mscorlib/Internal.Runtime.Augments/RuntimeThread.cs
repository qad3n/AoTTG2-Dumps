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
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x52FE4E0", Offset = "0x52FD4E0", VA = "0x52FE4E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x52FE420", Offset = "0x52FD420", VA = "0x52FE420")]
	private RuntimeThread(Thread t)
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x52FE450", Offset = "0x52FD450", VA = "0x52FE450")]
	public static Internal.Runtime.Augments.RuntimeThread Create(ParameterizedThreadStart start, int maxStackSize)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x52FE500", Offset = "0x52FD500", VA = "0x52FE500")]
	public void Start(object state)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x52FE520", Offset = "0x52FD520", VA = "0x52FE520")]
	public static void Sleep(int millisecondsTimeout)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x52FE530", Offset = "0x52FD530", VA = "0x52FE530")]
	public static bool Yield()
	{
		return default(bool);
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x52FE540", Offset = "0x52FD540", VA = "0x52FE540")]
	public static bool SpinWait(int iterations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x52FE550", Offset = "0x52FD550", VA = "0x52FE550")]
	public static int GetCurrentProcessorId()
	{
		return default(int);
	}
}
