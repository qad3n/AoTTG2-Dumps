using System.IO;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000112")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Logging/UnityLogWriter.bindings.h")]
internal class UnityLogWriter : TextWriter
{
	[Token(Token = "0x17000166")]
	public override Encoding Encoding
	{
		[Token(Token = "0x600076D")]
		[Address(RVA = "0x4ABD520", Offset = "0x4ABD520", VA = "0x4ABD520", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x4ABD390", Offset = "0x4ABD390", VA = "0x4ABD390")]
	[UnityEngine.ThreadAndSerializationSafe]
	public static void WriteStringToUnityLog(string s)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600076B")]
	[Address(RVA = "0x4ABD3D0", Offset = "0x4ABD3D0", VA = "0x4ABD3D0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	private static extern void WriteStringToUnityLogImpl(string s);

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x4ABD400", Offset = "0x4ABD400", VA = "0x4ABD400")]
	public static void Init()
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x4ABD530", Offset = "0x4ABD530", VA = "0x4ABD530", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x4ABD5A0", Offset = "0x4ABD5A0", VA = "0x4ABD5A0", Slot = "18")]
	public override void Write(string s)
	{
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x4ABD5E0", Offset = "0x4ABD5E0", VA = "0x4ABD5E0", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x4ABD4B0", Offset = "0x4ABD4B0", VA = "0x4ABD4B0")]
	public UnityLogWriter()
	{
	}
}
