using System.CodeDom.Compiler;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

[Token(Token = "0x2000005")]
[CompilerGenerated]
[EditorBrowsable(EditorBrowsableState.Never)]
[GeneratedCode("Unity.MonoScriptGenerator.MonoScriptInfoGenerator", null)]
internal class UnitySourceGeneratedAssemblyMonoScriptTypes_v1
{
	[Token(Token = "0x2000006")]
	private struct MonoScriptData
	{
		[Token(Token = "0x4000004")]
		[FieldOffset(Offset = "0x0")]
		public byte[] FilePathsData;

		[Token(Token = "0x4000005")]
		[FieldOffset(Offset = "0x8")]
		public byte[] TypesData;

		[Token(Token = "0x4000006")]
		[FieldOffset(Offset = "0x10")]
		public int TotalTypes;

		[Token(Token = "0x4000007")]
		[FieldOffset(Offset = "0x14")]
		public int TotalFiles;

		[Token(Token = "0x4000008")]
		[FieldOffset(Offset = "0x18")]
		public bool IsEditorOnly;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x232B5E0", Offset = "0x232B5E0", VA = "0x232B5E0")]
	private static MonoScriptData Get()
	{
		return default(MonoScriptData);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x232B710", Offset = "0x232B710", VA = "0x232B710")]
	public UnitySourceGeneratedAssemblyMonoScriptTypes_v1()
	{
	}
}
