// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JRaw
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x1C88CE0", Offset = "0x1C872E0", VA = "0x181C88CE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000C91")]
		[Address(RVA = "0x1C891E0", Offset = "0x1C877E0", VA = "0x181C891E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x1C7C260", Offset = "0x1C7A860", VA = "0x181C7C260")]
	[AsyncStateMachine(typeof(_003CCreateAsync_003Ed__0))]
	public static Task<JRaw> CreateAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x1C7C5C0", Offset = "0x1C7ABC0", VA = "0x181C7C5C0")]
	public JRaw(JRaw other)
	{
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x1C7C5D0", Offset = "0x1C7ABD0", VA = "0x181C7C5D0")]
	internal JRaw(JRaw other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x1C7C5B0", Offset = "0x1C7ABB0", VA = "0x181C7C5B0")]
	public JRaw(object? rawJson)
	{
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x1C7C380", Offset = "0x1C7A980", VA = "0x181C7C380")]
	public static JRaw Create(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x1C7C1F0", Offset = "0x1C7A7F0", VA = "0x181C7C1F0", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}
}
