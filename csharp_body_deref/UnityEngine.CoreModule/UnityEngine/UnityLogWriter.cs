// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UnityLogWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200013B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Logging/UnityLogWriter.bindings.h")]
internal class UnityLogWriter : TextWriter
{
	[Token(Token = "0x170001C5")]
	public override Encoding Encoding
	{
		[Token(Token = "0x6000A0E")]
		[Address(RVA = "0x68FBF10", Offset = "0x68FAF10", VA = "0x68FBF10", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x68FBC20", Offset = "0x68FAC20", VA = "0x68FBC20")]
	[UnityEngine.ThreadAndSerializationSafe]
	public static void WriteStringToUnityLog(string s)
	{
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x68FBC30", Offset = "0x68FAC30", VA = "0x68FBC30")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static void WriteStringToUnityLogImpl(string s)
	{
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x68FBDC0", Offset = "0x68FADC0", VA = "0x68FBDC0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x68FBF20", Offset = "0x68FAF20", VA = "0x68FBF20", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x68FBF60", Offset = "0x68FAF60", VA = "0x68FBF60", Slot = "18")]
	public override void Write(string s)
	{
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x68FBF70", Offset = "0x68FAF70", VA = "0x68FBF70", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x68FBEA0", Offset = "0x68FAEA0", VA = "0x68FBEA0")]
	public UnityLogWriter()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x68FBD90", Offset = "0x68FAD90", VA = "0x68FBD90")]
	private static extern void WriteStringToUnityLogImpl_Injected(ref ManagedSpanWrapper s);
}
