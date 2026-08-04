// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.ValidationState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001FB")]
internal sealed class ValidationState
{
	[Token(Token = "0x4000A69")]
	[FieldOffset(Offset = "0x10")]
	public bool IsNill;

	[Token(Token = "0x4000A6A")]
	[FieldOffset(Offset = "0x11")]
	public bool IsDefault;

	[Token(Token = "0x4000A6B")]
	[FieldOffset(Offset = "0x12")]
	public bool NeedValidateChildren;

	[Token(Token = "0x4000A6C")]
	[FieldOffset(Offset = "0x13")]
	public bool CheckRequiredAttribute;

	[Token(Token = "0x4000A6D")]
	[FieldOffset(Offset = "0x14")]
	public bool ValidationSkipped;

	[Token(Token = "0x4000A6E")]
	[FieldOffset(Offset = "0x18")]
	public XmlSchemaContentProcessing ProcessContents;

	[Token(Token = "0x4000A6F")]
	[FieldOffset(Offset = "0x1C")]
	public XmlSchemaValidity Validity;

	[Token(Token = "0x4000A70")]
	[FieldOffset(Offset = "0x20")]
	public SchemaElementDecl ElementDecl;

	[Token(Token = "0x4000A71")]
	[FieldOffset(Offset = "0x28")]
	public SchemaElementDecl ElementDeclBeforeXsi;

	[Token(Token = "0x4000A72")]
	[FieldOffset(Offset = "0x30")]
	public string LocalName;

	[Token(Token = "0x4000A73")]
	[FieldOffset(Offset = "0x38")]
	public string Namespace;

	[Token(Token = "0x4000A74")]
	[FieldOffset(Offset = "0x40")]
	public ConstraintStruct[] Constr;

	[Token(Token = "0x4000A75")]
	[FieldOffset(Offset = "0x48")]
	public StateUnion CurrentState;

	[Token(Token = "0x4000A76")]
	[FieldOffset(Offset = "0x4C")]
	public bool HasMatched;

	[Token(Token = "0x4000A77")]
	[FieldOffset(Offset = "0x50")]
	public BitSet[] CurPos;

	[Token(Token = "0x4000A78")]
	[FieldOffset(Offset = "0x58")]
	public BitSet AllElementsSet;

	[Token(Token = "0x4000A79")]
	[FieldOffset(Offset = "0x60")]
	public List<RangePositionInfo> RunningPositions;

	[Token(Token = "0x4000A7A")]
	[FieldOffset(Offset = "0x68")]
	public bool TooComplex;

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x470C250", Offset = "0x470C250", VA = "0x470C250")]
	public ValidationState()
	{
	}
}
