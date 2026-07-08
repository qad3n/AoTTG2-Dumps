using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000113")]
internal static class AwaiterActions
{
	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Action<object> InvokeContinuationDelegate;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x46C5AD0", Offset = "0x46C5AD0", VA = "0x46C5AD0")]
	[DebuggerHidden]
	private static void Continuation(object state)
	{
	}
}
