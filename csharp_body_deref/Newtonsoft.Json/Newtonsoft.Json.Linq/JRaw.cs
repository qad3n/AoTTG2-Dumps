using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x200017A")]
public class JRaw : JValue
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200017B")]
	[CompilerGenerated]
	private struct _003CCreateAsync_003Ed__0 : IAsyncStateMachine
	{
		[Token(Token = "0x40006F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40006F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<JRaw> _003C_003Et__builder;

		[Token(Token = "0x40006F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader reader;

		[Token(Token = "0x40006F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40006F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private StringWriter _003Csw_003E5__2;

		[Token(Token = "0x40006F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private JsonTextWriter _003CjsonWriter_003E5__3;

		[Token(Token = "0x40006F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000C90")]
		[Address(RVA = "0x3B26BE0", Offset = "0x3B26BE0", VA = "0x3B26BE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000C91")]
		[Address(RVA = "0x3B27230", Offset = "0x3B27230", VA = "0x3B27230", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x3B26680", Offset = "0x3B26680", VA = "0x3B26680")]
	[AsyncStateMachine(typeof(_003CCreateAsync_003Ed__0))]
	public static Task<JRaw> CreateAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x3B267A0", Offset = "0x3B267A0", VA = "0x3B267A0")]
	public JRaw(JRaw other)
	{
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x3B267B0", Offset = "0x3B267B0", VA = "0x3B267B0")]
	internal JRaw(JRaw other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x3B267C0", Offset = "0x3B267C0", VA = "0x3B267C0")]
	public JRaw(object? rawJson)
	{
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x3B267D0", Offset = "0x3B267D0", VA = "0x3B267D0")]
	public static JRaw Create(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x3B26B80", Offset = "0x3B26B80", VA = "0x3B26B80", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}
}
