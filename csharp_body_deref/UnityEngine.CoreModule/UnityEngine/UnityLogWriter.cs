// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UnityLogWriter
// Update status: CHANGED in this game update
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

[Token(Token = "0x200013A")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Logging/UnityLogWriter.bindings.h")]
internal class UnityLogWriter : TextWriter
{
	[Token(Token = "0x170001C0")]
	public override Encoding Encoding
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x2F0A550", Offset = "0x2F08B50", VA = "0x182F0A550", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x2F0A460", Offset = "0x2F08A60", VA = "0x182F0A460")]
	[UnityEngine.ThreadAndSerializationSafe]
	public static void WriteStringToUnityLog(string s)
	{
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x2F0A2E0", Offset = "0x2F088E0", VA = "0x182F0A2E0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static void WriteStringToUnityLogImpl(string s)
	{
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x2F0A1C0", Offset = "0x2F087C0", VA = "0x182F0A1C0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x2F0A490", Offset = "0x2F08A90", VA = "0x182F0A490", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x2F0A470", Offset = "0x2F08A70", VA = "0x182F0A470", Slot = "18")]
	public override void Write(string s)
	{
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x2F0A4D0", Offset = "0x2F08AD0", VA = "0x182F0A4D0", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x2F0A500", Offset = "0x2F08B00", VA = "0x182F0A500")]
	public UnityLogWriter()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x2F0A2A0", Offset = "0x2F088A0", VA = "0x182F0A2A0")]
	private static extern void WriteStringToUnityLogImpl_Injected(ref ManagedSpanWrapper s);
}
