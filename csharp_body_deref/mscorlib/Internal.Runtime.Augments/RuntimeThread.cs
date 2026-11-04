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

[Token(Token = "0x200008D")]
internal sealed class RuntimeThread
{
	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int OptimalMaxSpinWaitsPerSpinIteration;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x10")]
	private readonly Thread thread;

	[Token(Token = "0x1700003C")]
	public bool IsBackground
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x1967AD0", Offset = "0x19660D0", VA = "0x181967AD0")]
		set
		{
		}
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	private RuntimeThread(Thread t)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x1967990", Offset = "0x1965F90", VA = "0x181967990")]
	public static Internal.Runtime.Augments.RuntimeThread Create(ParameterizedThreadStart start, int maxStackSize)
	{
		return null;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x1967A60", Offset = "0x1966060", VA = "0x181967A60")]
	public void Start(object state)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x1967A30", Offset = "0x1966030", VA = "0x181967A30")]
	public static void Sleep(int millisecondsTimeout)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x1967A80", Offset = "0x1966080", VA = "0x181967A80")]
	public static bool Yield()
	{
		return default(bool);
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x1967A40", Offset = "0x1966040", VA = "0x181967A40")]
	public static bool SpinWait(int iterations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040")]
	public static int GetCurrentProcessorId()
	{
		return default(int);
	}
}
