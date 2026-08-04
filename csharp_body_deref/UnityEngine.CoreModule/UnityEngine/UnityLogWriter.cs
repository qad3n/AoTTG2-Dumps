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

[Token(Token = "0x2000115")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Logging/UnityLogWriter.bindings.h")]
internal class UnityLogWriter : TextWriter
{
	[Token(Token = "0x17000167")]
	public override Encoding Encoding
	{
		[Token(Token = "0x600076F")]
		[Address(RVA = "0x4DE4E50", Offset = "0x4DE4E50", VA = "0x4DE4E50", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x4DE4CC0", Offset = "0x4DE4CC0", VA = "0x4DE4CC0")]
	[UnityEngine.ThreadAndSerializationSafe]
	public static void WriteStringToUnityLog(string s)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600076D")]
	[Address(RVA = "0x4DE4D00", Offset = "0x4DE4D00", VA = "0x4DE4D00")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern void WriteStringToUnityLogImpl(string s);

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x4DE4D30", Offset = "0x4DE4D30", VA = "0x4DE4D30")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x4DE4E60", Offset = "0x4DE4E60", VA = "0x4DE4E60", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x4DE4ED0", Offset = "0x4DE4ED0", VA = "0x4DE4ED0", Slot = "18")]
	public override void Write(string s)
	{
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x4DE4F10", Offset = "0x4DE4F10", VA = "0x4DE4F10", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x4DE4DE0", Offset = "0x4DE4DE0", VA = "0x4DE4DE0")]
	public UnityLogWriter()
	{
	}
}
