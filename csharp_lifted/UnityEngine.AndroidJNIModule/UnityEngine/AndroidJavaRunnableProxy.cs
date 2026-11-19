// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidJavaRunnableProxy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200000A")]
internal class AndroidJavaRunnableProxy : AndroidJavaProxy
{
	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x20")]
	private AndroidJavaRunnable mRunnable;

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x689E9F0", Offset = "0x689D9F0", VA = "0x689E9F0")]
	public AndroidJavaRunnableProxy(AndroidJavaRunnable runnable)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x689EB90", Offset = "0x689DB90", VA = "0x689EB90")]
	public void run()
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x689EBB0", Offset = "0x689DBB0", VA = "0x689EBB0", Slot = "6")]
	public override IntPtr Invoke(string methodName, IntPtr javaArgs)
	{
		return default(IntPtr);
	}
}
