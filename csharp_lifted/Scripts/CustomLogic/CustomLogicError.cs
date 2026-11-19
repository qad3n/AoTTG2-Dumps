// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicError
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicError.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000640")]
public class CustomLogicError
{
	[Token(Token = "0x17000A7A")]
	public string Message
	{
		[Token(Token = "0x6003C2B")]
		[Address(RVA = "0x5A741F0", Offset = "0x5A731F0", VA = "0x5A741F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$get_Message): clean
			return this._Message_k__BackingField;
		}
		[Token(Token = "0x6003C2C")]
		[Address(RVA = "0x5A74200", Offset = "0x5A73200", VA = "0x5A74200")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$set_Message): clean
			this._Message_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A7B")]
	public string ClassName
	{
		[Token(Token = "0x6003C2D")]
		[Address(RVA = "0x5A74210", Offset = "0x5A73210", VA = "0x5A74210")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$get_ClassName): clean
			return this._ClassName_k__BackingField;
		}
		[Token(Token = "0x6003C2E")]
		[Address(RVA = "0x5A74220", Offset = "0x5A73220", VA = "0x5A74220")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$set_ClassName): clean
			this._ClassName_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A7C")]
	public string MethodName
	{
		[Token(Token = "0x6003C2F")]
		[Address(RVA = "0x5A74230", Offset = "0x5A73230", VA = "0x5A74230")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$get_MethodName): clean
			return this._MethodName_k__BackingField;
		}
		[Token(Token = "0x6003C30")]
		[Address(RVA = "0x5A74240", Offset = "0x5A73240", VA = "0x5A74240")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$set_MethodName): clean
			this._MethodName_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A7D")]
	public int LineNumber
	{
		[Token(Token = "0x6003C31")]
		[Address(RVA = "0x5A74250", Offset = "0x5A73250", VA = "0x5A74250")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$get_LineNumber): clean
			return this._LineNumber_k__BackingField;
		}
		[Token(Token = "0x6003C32")]
		[Address(RVA = "0x5A74260", Offset = "0x5A73260", VA = "0x5A74260")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$set_LineNumber): clean
			this._LineNumber_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A7E")]
	public string FormattedLineNumber
	{
		[Token(Token = "0x6003C33")]
		[Address(RVA = "0x5A74270", Offset = "0x5A73270", VA = "0x5A74270")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$get_FormattedLineNumber): clean
			return this._FormattedLineNumber_k__BackingField;
		}
		[Token(Token = "0x6003C34")]
		[Address(RVA = "0x5A74280", Offset = "0x5A73280", VA = "0x5A74280")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$set_FormattedLineNumber): clean
			this._FormattedLineNumber_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A7F")]
	public CustomLogicSourceType? Namespace
	{
		[Token(Token = "0x6003C35")]
		[Address(RVA = "0x5A74290", Offset = "0x5A73290", VA = "0x5A74290")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$get_Namespace): clean
			return (Nullable<CustomLogicSourceType>)this._Namespace_k__BackingField;
		}
		[Token(Token = "0x6003C36")]
		[Address(RVA = "0x5A742A0", Offset = "0x5A732A0", VA = "0x5A742A0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$set_Namespace): clean
			this._Namespace_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A80")]
	public string FullMessage
	{
		[Token(Token = "0x6003C37")]
		[Address(RVA = "0x5A742B0", Offset = "0x5A732B0", VA = "0x5A742B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$get_FullMessage): clean
			bool bVar1;
			String pSVar2;
			String[] values;

			bVar1 = String.IsNullOrEmpty(this._FormattedLineNumber_k__BackingField);
			if (bVar1) {
				pSVar2 = String.Concat("at ", this._ClassName_k__BackingField, ".", this._MethodName_k__BackingField);
		label_05b7442e: ;
				pSVar2 = String.Concat("Custom logic runtime error ", pSVar2, ": ", this._Message_k__BackingField);
				return pSVar2;
			}
			values = (String[])new string[6];
			if (values == null) {
				throw new NullReferenceException();
			}
			if ((int)values.Length != 0) {
				values[0] = "at line ";
				if ((values.Length & 0xfffffffe) != 0) {
					values[1] = this._FormattedLineNumber_k__BackingField;
					if (2 < (uint)values.Length) {
						values[2] = " in ";
						if ((values.Length & 0xfffffffc) != 0) {
							values[3] = this._ClassName_k__BackingField;
							if (4 < (uint)values.Length) {
								values[4] = ".";
								if (5 < (uint)values.Length) {
									values[5] = this._MethodName_k__BackingField;
									pSVar2 = String.Concat(values);
									goto label_05b7442e;
								}
							}
						}
					}
				}
			}
			throw new IndexOutOfRangeException();
		}
	}

	[Token(Token = "0x6003C38")]
	[Address(RVA = "0x5A74470", Offset = "0x5A73470", VA = "0x5A74470")]
	public CustomLogicError(string message, string className, string methodName, int lineNumber, string formattedLineNumber, CustomLogicSourceType? ns)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$.ctor): clean
		base();
		this._Message_k__BackingField = message;
		this._ClassName_k__BackingField = className;
		this._MethodName_k__BackingField = methodName;
		this._LineNumber_k__BackingField = lineNumber;
		this._FormattedLineNumber_k__BackingField = formattedLineNumber;
		this._Namespace_k__BackingField = ns;
		return;
	}

	[Token(Token = "0x6003C39")]
	[Address(RVA = "0x5A744F0", Offset = "0x5A734F0", VA = "0x5A744F0", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicError.c (CustomLogic.CustomLogicError$$ToString): clean
		String pSVar1;

		return pSVar1;
	}
}
