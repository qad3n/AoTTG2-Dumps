using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.AI;

[Token(Token = "0x200000F")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Public/NavMeshBindingTypes.h")]
public struct NavMeshBuildMarkup
{
	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x0")]
	private int m_OverrideArea;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x4")]
	private int m_Area;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x8")]
	private int m_InheritIgnoreFromBuild;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0xC")]
	private int m_IgnoreFromBuild;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x10")]
	private int m_OverrideGenerateLinks;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x14")]
	private int m_GenerateLinks;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x18")]
	private int m_InstanceID;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x1C")]
	private int m_IgnoreChildren;
}
