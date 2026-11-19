// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CustomLogic.Editor.Models;
using Il2CppDummyDll;
using Newtonsoft.Json;

namespace CustomLogic.Editor;

[Token(Token = "0x200065E")]
internal class CustomLogicVSCExtensionJsonDocsGenerator : BaseCustomLogicDocsGenerator
{
	[Token(Token = "0x200065F")]
	private class ClassDefinition
	{
		[Token(Token = "0x17000A93")]
		public string Kind
		{
			[Token(Token = "0x6003D3D")]
			[Address(RVA = "0x5A93AA0", Offset = "0x5A92AA0", VA = "0x5A93AA0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$get_Kind): clean
				return this._Kind_k__BackingField;
			}
			[Token(Token = "0x6003D3E")]
			[Address(RVA = "0x5A93AB0", Offset = "0x5A92AB0", VA = "0x5A93AB0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$set_Kind): clean
				this._Kind_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A94")]
		public string Name
		{
			[Token(Token = "0x6003D3F")]
			[Address(RVA = "0x5A93AC0", Offset = "0x5A92AC0", VA = "0x5A93AC0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$get_Name): clean
				return this._Name_k__BackingField;
			}
			[Token(Token = "0x6003D40")]
			[Address(RVA = "0x5A93AD0", Offset = "0x5A92AD0", VA = "0x5A93AD0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$set_Name): clean
				this._Name_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A95")]
		public string Description
		{
			[Token(Token = "0x6003D41")]
			[Address(RVA = "0x5A93AE0", Offset = "0x5A92AE0", VA = "0x5A93AE0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$get_Description): clean
				return this._Description_k__BackingField;
			}
			[Token(Token = "0x6003D42")]
			[Address(RVA = "0x5A93AF0", Offset = "0x5A92AF0", VA = "0x5A93AF0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$set_Description): clean
				this._Description_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A96")]
		public List<string> TypeParameters
		{
			[Token(Token = "0x6003D43")]
			[Address(RVA = "0x5A93B00", Offset = "0x5A92B00", VA = "0x5A93B00")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$get_TypeParameters): clean
				return this._TypeParameters_k__BackingField;
			}
			[Token(Token = "0x6003D44")]
			[Address(RVA = "0x5A93B10", Offset = "0x5A92B10", VA = "0x5A93B10")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$set_TypeParameters): clean
				this._TypeParameters_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A97")]
		public List<string> Extends
		{
			[Token(Token = "0x6003D45")]
			[Address(RVA = "0x5A93B20", Offset = "0x5A92B20", VA = "0x5A93B20")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$get_Extends): clean
				return this._Extends_k__BackingField;
			}
			[Token(Token = "0x6003D46")]
			[Address(RVA = "0x5A93B30", Offset = "0x5A92B30", VA = "0x5A93B30")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$set_Extends): clean
				this._Extends_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A98")]
		public string Deprecated
		{
			[Token(Token = "0x6003D47")]
			[Address(RVA = "0x5A93B40", Offset = "0x5A92B40", VA = "0x5A93B40")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$get_Deprecated): clean
				return this._Deprecated_k__BackingField;
			}
			[Token(Token = "0x6003D48")]
			[Address(RVA = "0x5A93B50", Offset = "0x5A92B50", VA = "0x5A93B50")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$set_Deprecated): clean
				this._Deprecated_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A99")]
		public List<Field> InstanceFields
		{
			[Token(Token = "0x6003D49")]
			[Address(RVA = "0x5A93B60", Offset = "0x5A92B60", VA = "0x5A93B60")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$get_InstanceFields): clean
				return this._InstanceFields_k__BackingField;
			}
			[Token(Token = "0x6003D4A")]
			[Address(RVA = "0x5A93B70", Offset = "0x5A92B70", VA = "0x5A93B70")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$set_InstanceFields): clean
				this._InstanceFields_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A9A")]
		public List<Method> InstanceMethods
		{
			[Token(Token = "0x6003D4B")]
			[Address(RVA = "0x5A93B80", Offset = "0x5A92B80", VA = "0x5A93B80")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$get_InstanceMethods): clean
				return this._InstanceMethods_k__BackingField;
			}
			[Token(Token = "0x6003D4C")]
			[Address(RVA = "0x5A93B90", Offset = "0x5A92B90", VA = "0x5A93B90")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$set_InstanceMethods): clean
				this._InstanceMethods_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A9B")]
		public List<Field> StaticFields
		{
			[Token(Token = "0x6003D4D")]
			[Address(RVA = "0x5A93BA0", Offset = "0x5A92BA0", VA = "0x5A93BA0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$get_StaticFields): clean
				return this._StaticFields_k__BackingField;
			}
			[Token(Token = "0x6003D4E")]
			[Address(RVA = "0x5A93BB0", Offset = "0x5A92BB0", VA = "0x5A93BB0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$set_StaticFields): clean
				this._StaticFields_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A9C")]
		public List<Method> StaticMethods
		{
			[Token(Token = "0x6003D4F")]
			[Address(RVA = "0x5A93BC0", Offset = "0x5A92BC0", VA = "0x5A93BC0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$get_StaticMethods): clean
				return this._StaticMethods_k__BackingField;
			}
			[Token(Token = "0x6003D50")]
			[Address(RVA = "0x5A93BD0", Offset = "0x5A92BD0", VA = "0x5A93BD0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$set_StaticMethods): clean
				this._StaticMethods_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A9D")]
		public List<Constructor> Constructors
		{
			[Token(Token = "0x6003D51")]
			[Address(RVA = "0x5A93BE0", Offset = "0x5A92BE0", VA = "0x5A93BE0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$get_Constructors): clean
				return this._Constructors_k__BackingField;
			}
			[Token(Token = "0x6003D52")]
			[Address(RVA = "0x5A93BF0", Offset = "0x5A92BF0", VA = "0x5A93BF0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$set_Constructors): clean
				this._Constructors_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x6003D53")]
		[Address(RVA = "0x5A92CE0", Offset = "0x5A91CE0", VA = "0x5A92CE0")]
		public ClassDefinition()
		{
			// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x2000660")]
	private class Field
	{
		[Token(Token = "0x17000A9E")]
		public string Label
		{
			[Token(Token = "0x6003D54")]
			[Address(RVA = "0x5A93C00", Offset = "0x5A92C00", VA = "0x5A93C00")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$get_Label): clean
				return this._Label_k__BackingField;
			}
			[Token(Token = "0x6003D55")]
			[Address(RVA = "0x5A93C10", Offset = "0x5A92C10", VA = "0x5A93C10")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$set_Label): clean
				this._Label_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A9F")]
		public JsonTypeReference Type
		{
			[Token(Token = "0x6003D56")]
			[Address(RVA = "0x5A93C20", Offset = "0x5A92C20", VA = "0x5A93C20")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$get_Type): clean
				return this._Type_k__BackingField;
			}
			[Token(Token = "0x6003D57")]
			[Address(RVA = "0x5A93C30", Offset = "0x5A92C30", VA = "0x5A93C30")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$set_Type): clean
				this._Type_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AA0")]
		public string Description
		{
			[Token(Token = "0x6003D58")]
			[Address(RVA = "0x5A93C40", Offset = "0x5A92C40", VA = "0x5A93C40")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$get_Description): clean
				return this._Description_k__BackingField;
			}
			[Token(Token = "0x6003D59")]
			[Address(RVA = "0x5A93C50", Offset = "0x5A92C50", VA = "0x5A93C50")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$set_Description): clean
				this._Description_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AA1")]
		public bool Readonly
		{
			[Token(Token = "0x6003D5A")]
			[Address(RVA = "0x5A93C60", Offset = "0x5A92C60", VA = "0x5A93C60")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$get_Readonly): clean
				return this._Readonly_k__BackingField;
			}
			[Token(Token = "0x6003D5B")]
			[Address(RVA = "0x5A93C70", Offset = "0x5A92C70", VA = "0x5A93C70")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$set_Readonly): clean
				this._Readonly_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AA2")]
		public bool Private
		{
			[Token(Token = "0x6003D5C")]
			[Address(RVA = "0x5A93C80", Offset = "0x5A92C80", VA = "0x5A93C80")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$get_Private): clean
				return this._Private_k__BackingField;
			}
			[Token(Token = "0x6003D5D")]
			[Address(RVA = "0x5A93C90", Offset = "0x5A92C90", VA = "0x5A93C90")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$set_Private): clean
				this._Private_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AA3")]
		public string Deprecated
		{
			[Token(Token = "0x6003D5E")]
			[Address(RVA = "0x5A93CA0", Offset = "0x5A92CA0", VA = "0x5A93CA0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$get_Deprecated): clean
				return this._Deprecated_k__BackingField;
			}
			[Token(Token = "0x6003D5F")]
			[Address(RVA = "0x5A93CB0", Offset = "0x5A92CB0", VA = "0x5A93CB0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$set_Deprecated): clean
				this._Deprecated_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x6003D60")]
		[Address(RVA = "0x5A93710", Offset = "0x5A92710", VA = "0x5A93710")]
		public Field()
		{
			// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Field$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x2000661")]
	private class Method
	{
		[Token(Token = "0x17000AA4")]
		public string Label
		{
			[Token(Token = "0x6003D61")]
			[Address(RVA = "0x5A93CC0", Offset = "0x5A92CC0", VA = "0x5A93CC0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$get_Label): clean
				return this._Label_k__BackingField;
			}
			[Token(Token = "0x6003D62")]
			[Address(RVA = "0x5A93CD0", Offset = "0x5A92CD0", VA = "0x5A93CD0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$set_Label): clean
				this._Label_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AA5")]
		public JsonTypeReference ReturnType
		{
			[Token(Token = "0x6003D63")]
			[Address(RVA = "0x5A93CE0", Offset = "0x5A92CE0", VA = "0x5A93CE0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$get_ReturnType): clean
				return this._ReturnType_k__BackingField;
			}
			[Token(Token = "0x6003D64")]
			[Address(RVA = "0x5A93CF0", Offset = "0x5A92CF0", VA = "0x5A93CF0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$set_ReturnType): clean
				this._ReturnType_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AA6")]
		public string Description
		{
			[Token(Token = "0x6003D65")]
			[Address(RVA = "0x5A93D00", Offset = "0x5A92D00", VA = "0x5A93D00")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$get_Description): clean
				return this._Description_k__BackingField;
			}
			[Token(Token = "0x6003D66")]
			[Address(RVA = "0x5A93D10", Offset = "0x5A92D10", VA = "0x5A93D10")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$set_Description): clean
				this._Description_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AA7")]
		public List<Parameter> Parameters
		{
			[Token(Token = "0x6003D67")]
			[Address(RVA = "0x5A93D20", Offset = "0x5A92D20", VA = "0x5A93D20")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$get_Parameters): clean
				return this._Parameters_k__BackingField;
			}
			[Token(Token = "0x6003D68")]
			[Address(RVA = "0x5A93D30", Offset = "0x5A92D30", VA = "0x5A93D30")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$set_Parameters): clean
				this._Parameters_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AA8")]
		public string Kind
		{
			[Token(Token = "0x6003D69")]
			[Address(RVA = "0x5A93D40", Offset = "0x5A92D40", VA = "0x5A93D40")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$get_Kind): clean
				return this._Kind_k__BackingField;
			}
			[Token(Token = "0x6003D6A")]
			[Address(RVA = "0x5A93D50", Offset = "0x5A92D50", VA = "0x5A93D50")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$set_Kind): clean
				this._Kind_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AA9")]
		public string Deprecated
		{
			[Token(Token = "0x6003D6B")]
			[Address(RVA = "0x5A93D60", Offset = "0x5A92D60", VA = "0x5A93D60")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$get_Deprecated): clean
				return this._Deprecated_k__BackingField;
			}
			[Token(Token = "0x6003D6C")]
			[Address(RVA = "0x5A93D70", Offset = "0x5A92D70", VA = "0x5A93D70")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$set_Deprecated): clean
				this._Deprecated_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x6003D6D")]
		[Address(RVA = "0x5A93840", Offset = "0x5A92840", VA = "0x5A93840")]
		public Method()
		{
			// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Method$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x2000662")]
	private class Constructor
	{
		[Token(Token = "0x17000AAA")]
		public List<Parameter> Parameters
		{
			[Token(Token = "0x6003D6E")]
			[Address(RVA = "0x5A93D80", Offset = "0x5A92D80", VA = "0x5A93D80")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Constructor$$get_Parameters): clean
				return this._Parameters_k__BackingField;
			}
			[Token(Token = "0x6003D6F")]
			[Address(RVA = "0x5A93D90", Offset = "0x5A92D90", VA = "0x5A93D90")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Constructor$$set_Parameters): clean
				this._Parameters_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AAB")]
		public string Description
		{
			[Token(Token = "0x6003D70")]
			[Address(RVA = "0x5A93DA0", Offset = "0x5A92DA0", VA = "0x5A93DA0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Constructor$$get_Description): clean
				return this._Description_k__BackingField;
			}
			[Token(Token = "0x6003D71")]
			[Address(RVA = "0x5A93DB0", Offset = "0x5A92DB0", VA = "0x5A93DB0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Constructor$$set_Description): clean
				this._Description_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AAC")]
		public string Deprecated
		{
			[Token(Token = "0x6003D72")]
			[Address(RVA = "0x5A93DC0", Offset = "0x5A92DC0", VA = "0x5A93DC0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Constructor$$get_Deprecated): clean
				return this._Deprecated_k__BackingField;
			}
			[Token(Token = "0x6003D73")]
			[Address(RVA = "0x5A93DD0", Offset = "0x5A92DD0", VA = "0x5A93DD0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Constructor$$set_Deprecated): clean
				this._Deprecated_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x6003D74")]
		[Address(RVA = "0x5A93910", Offset = "0x5A92910", VA = "0x5A93910")]
		public Constructor()
		{
			// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Constructor$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x2000663")]
	private class Parameter
	{
		[Token(Token = "0x17000AAD")]
		public string Name
		{
			[Token(Token = "0x6003D75")]
			[Address(RVA = "0x5A93DE0", Offset = "0x5A92DE0", VA = "0x5A93DE0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Parameter$$get_Name): clean
				return this._Name_k__BackingField;
			}
			[Token(Token = "0x6003D76")]
			[Address(RVA = "0x5A93DF0", Offset = "0x5A92DF0", VA = "0x5A93DF0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Parameter$$set_Name): clean
				this._Name_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AAE")]
		public JsonTypeReference Type
		{
			[Token(Token = "0x6003D77")]
			[Address(RVA = "0x5A93E00", Offset = "0x5A92E00", VA = "0x5A93E00")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Parameter$$get_Type): clean
				return this._Type_k__BackingField;
			}
			[Token(Token = "0x6003D78")]
			[Address(RVA = "0x5A93E10", Offset = "0x5A92E10", VA = "0x5A93E10")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Parameter$$set_Type): clean
				this._Type_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AAF")]
		public string Description
		{
			[Token(Token = "0x6003D79")]
			[Address(RVA = "0x5A93E20", Offset = "0x5A92E20", VA = "0x5A93E20")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Parameter$$get_Description): clean
				return this._Description_k__BackingField;
			}
			[Token(Token = "0x6003D7A")]
			[Address(RVA = "0x5A93E30", Offset = "0x5A92E30", VA = "0x5A93E30")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Parameter$$set_Description): clean
				this._Description_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AB0")]
		public bool IsOptional
		{
			[Token(Token = "0x6003D7B")]
			[Address(RVA = "0x5A93E40", Offset = "0x5A92E40", VA = "0x5A93E40")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Parameter$$get_IsOptional): clean
				return this._IsOptional_k__BackingField;
			}
			[Token(Token = "0x6003D7C")]
			[Address(RVA = "0x5A93E50", Offset = "0x5A92E50", VA = "0x5A93E50")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Parameter$$set_IsOptional): clean
				this._IsOptional_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AB1")]
		public bool IsVariadic
		{
			[Token(Token = "0x6003D7D")]
			[Address(RVA = "0x5A93E60", Offset = "0x5A92E60", VA = "0x5A93E60")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Parameter$$get_IsVariadic): clean
				return this._IsVariadic_k__BackingField;
			}
			[Token(Token = "0x6003D7E")]
			[Address(RVA = "0x5A93E70", Offset = "0x5A92E70", VA = "0x5A93E70")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Parameter$$set_IsVariadic): clean
				this._IsVariadic_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x6003D7F")]
		[Address(RVA = "0x5A93A90", Offset = "0x5A92A90", VA = "0x5A93A90")]
		public Parameter()
		{
			// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.Parameter$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x2000664")]
	private class JsonTypeReference
	{
		[Token(Token = "0x17000AB2")]
		public string Name
		{
			[Token(Token = "0x6003D80")]
			[Address(RVA = "0x5A93E80", Offset = "0x5A92E80", VA = "0x5A93E80")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference$$get_Name): clean
				return this._Name_k__BackingField;
			}
			[Token(Token = "0x6003D81")]
			[Address(RVA = "0x5A93E90", Offset = "0x5A92E90", VA = "0x5A93E90")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference$$set_Name): clean
				this._Name_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000AB3")]
		public List<JsonTypeReference> TypeArguments
		{
			[Token(Token = "0x6003D82")]
			[Address(RVA = "0x5A93EA0", Offset = "0x5A92EA0", VA = "0x5A93EA0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference$$get_TypeArguments): clean
				return this._TypeArguments_k__BackingField;
			}
			[Token(Token = "0x6003D83")]
			[Address(RVA = "0x5A93EB0", Offset = "0x5A92EB0", VA = "0x5A93EB0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference$$set_TypeArguments): clean
				this._TypeArguments_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x6003D84")]
		[Address(RVA = "0x5A93560", Offset = "0x5A92560", VA = "0x5A93560")]
		public JsonTypeReference()
		{
			// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x4001C26")]
	[FieldOffset(Offset = "0x18")]
	private readonly JsonSerializerSettings _settings;

	[Token(Token = "0x4001C27")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, ClassDefinition> _typeNameMap;

	[Token(Token = "0x6003D2D")]
	[Address(RVA = "0x5A92230", Offset = "0x5A91230", VA = "0x5A92230")]
	public CustomLogicVSCExtensionJsonDocsGenerator(CLType[] allTypes)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$.ctor): 4 lines keep C-only constructs
		Dictionary<string, CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition>* targetAddress;
		CLType pCVar1;
		Dictionary<object, object> __this_00;
		String pSVar2;
		sbyte pcVar3;
		byte puVar4;
		JsonSerializerSettings __this_01;
		DefaultContractResolver __this_02;
		CamelCaseNamingStrategy __this_03;
		Dictionary<string, CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition> __this_04;
		ulong uVar5;
		CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition value;
		object pIVar6;
		Il2CppClass __this_05;
		long lVar8;
		uint uVar9;

		__this_01 = new JsonSerializerSettings();
		__this_02 = new DefaultContractResolver();
		__this_03 = new CamelCaseNamingStrategy();
		if (__this_02 != null) {
			__this_02._NamingStrategy_k__BackingField =(NamingStrategy)__this_03;
			if (__this_01 != null) {
				__this_01._ContractResolver_k__BackingField =(IContractResolver)__this_02;
				__this_01.NullValueHandling = 1;
				__this_01.ReferenceLoopHandling = 1;
				this._settings = __this_01;
				__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition>));
				__this_04 = new Dictionary<object, object>();
				targetAddress = &this._typeNameMap;
				this._typeNameMap = __this_04;
				base();
				this.AllTypes = allTypes;
				if (allTypes != null) {
					uVar9 = (uint)allTypes.Length;
					uVar5 = (ulong)uVar9;
					if (0 < (int)uVar9) {
						uVar9 = 0;
						do {
							if ((uint)uVar5 <= uVar9) goto label_05b92594;
							pCVar1 = allTypes[(int)uVar9];
							if (pCVar1 == null) goto label_05b9258f;
							__this_00 = (Dictionary<object, object>)*targetAddress;
							pSVar2 = pCVar1._Name_k__BackingField;
							value = this.ConvertToClassDefinition(pCVar1);
							if (__this_00 == null) goto label_05b9258f;
							__this_00.set_Item((object)pSVar2, (object)value);
							uVar9 = uVar9 + 1;
							uVar5 = allTypes.Length;
						} while ((int)uVar9 < (int)uVar5);
						if (0 < (int)uVar5) {
							lVar8 = 0;
							do {
								if ((uint)uVar5 <= (uint)lVar8) {
	label_05b92594: ;
									throw new IndexOutOfRangeException();
								}
								pCVar1 = allTypes[lVar8];
								if ((pCVar1 == null) ||((Dictionary<object, object>)*targetAddress ==null)) goto label_05b9258f;
								pIVar6 = (*targetAddress).get_Item((object)pCVar1._Name_k__BackingField);
								if ((pCVar1._InheritBaseMembers_k__BackingField != false) &&(pCVar1._BaseType_k__BackingField != null)) {
									__this_05 = new List<string>();
									pCVar1 = pCVar1._BaseType_k__BackingField;
									if ((pCVar1 == null) || (__this_05 == null) ) goto label_05b9258f;
									pSVar2 = pCVar1._Name_k__BackingField;
									puVar4 = (byte)((long)&(__this_05._1).namespaze + 4);
									*(int)puVar4 = *(int)puVar4 + 1;
									pcVar3 = (__this_05._1).name;
									if (pcVar3 == null) goto label_05b9258f;
									uVar9 = *(uint)&(__this_05._1).namespaze;
									if (uVar9 < *(uint)(pcVar3 + 0x18)) {
										*(uint)&(__this_05._1).namespaze = uVar9 + 1;
										*(String*)(pcVar3 + (long)(int)uVar9 * 8 + 0x20) = pSVar2;
									}
									else {
										__this_05.AddWithResize((object)pSVar2);
									}
									if (pIVar6 == null) goto label_05b9258f;
									pIVar6[3].klass = __this_05;
								}
								uVar9 = (uint)allTypes.Length;
								uVar5 = (ulong)uVar9;
								lVar8 = lVar8 + 1;
							} while ((int)lVar8 < (int)uVar9);
						}
					}
					return;
				}
			}
		}
	label_05b9258f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D2E")]
	[Address(RVA = "0x5A927A0", Offset = "0x5A917A0", VA = "0x5A927A0", Slot = "4")]
	public override string GetRelativeFilePath(CLType type)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$GetRelativeFilePath): clean
		String pSVar1;

		if (type == null) {
			throw new NullReferenceException();
		}
		pSVar1 = String.Concat("vscode-json/", type._Name_k__BackingField, ".json");
		return pSVar1;
	}

	[Token(Token = "0x6003D2F")]
	[Address(RVA = "0x5A92800", Offset = "0x5A91800", VA = "0x5A92800", Slot = "5")]
	public override string Generate(CLType type)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$Generate): clean
		Dictionary<object, object> __this_00;
		JsonSerializerSettings settings;
		object value;
		String pSVar1;

		if ((type == null) ||(__this_00 = (Dictionary<object, object>)this._typeNameMap, __this_00 == null)) {
			throw new NullReferenceException();
		}
		value = __this_00.get_Item((object)type._Name_k__BackingField);
		settings = this._settings;
		pSVar1 = JsonConvert.SerializeObject(value, 1, settings);
		return pSVar1;
	}

	[Token(Token = "0x6003D30")]
	[Address(RVA = "0x5A92890", Offset = "0x5A91890", VA = "0x5A92890")]
	private string DetermineKind(CLType clType)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$DetermineKind): clean
		if (clType == null) {
			throw new NullReferenceException();
		}
		if (clType._IsComponent_k__BackingField != false) {
			return "component";
		}
		if (clType._IsStatic_k__BackingField == false) {
			return "class";
		}
		return "extension";
	}

	[Token(Token = "0x6003D31")]
	[Address(RVA = "0x5A92910", Offset = "0x5A91910", VA = "0x5A92910")]
	private string NormalizeDescription(string description)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$NormalizeDescription): 6 lines keep C-only constructs
		object pIVar1;
		bool bVar2;
		String[] pSVar3;
		Func<string, string> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator___c_StaticFields pCVar4;
		Func<string, bool> __this_01;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		String pSVar5;

		bVar2 = String.IsNullOrEmpty(description);
		if (bVar2) {
	label_05b92c22: ;
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar3 = (String[])new string[3];
		if (pSVar3 == null) {
	label_05b92c4b: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar3.Length != 0) {
			pSVar3[0] = "\r\n";
			if ((pSVar3.Length & 0xfffffffe) != 0) {
				pSVar3[1] = "\r";
				if (2 < (uint)pSVar3.Length) {
					pSVar3[2] = "\n";
					if (description != null) {
						pSVar3 = description.Split(pSVar3, 0);
						if ((typeof(CustomLogicVSCExtensionJsonDocsGenerator.c)._2). cctor_finished_or_no_cctor == 0) {
							pCVar4 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
							__this_00 = pCVar4.__9__6_0;
						}
						else {
							pCVar4 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
							__this_00 = pCVar4.__9__6_0;
						}
						if (__this_00 == null) {
							if (((typeof(CustomLogicVSCExtensionJsonDocsGenerator.c))._2). cctor_finished_or_no_cctor == 0) {
								pCVar4 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
							}
							pIVar1 = (object)pCVar4.__9;
							__this_00 = new Func<string, string>(pIVar1, (intptr_t) MethodInfo_CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_c_NormalizeDescription_b__6_0);
							pCVar4 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
							pCVar4.__9__6_0 = __this_00;
						}
						source = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (System_Func_TSource__TResult__o)__this_00);
						if ((typeof(CustomLogicVSCExtensionJsonDocsGenerator.c)._2). cctor_finished_or_no_cctor == 0) {
							pCVar4 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
							__this_01 = pCVar4.__9__6_1;
						}
						else {
							pCVar4 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
							__this_01 = pCVar4.__9__6_1;
						}
						if (__this_01 == null) {
							if (((typeof(CustomLogicVSCExtensionJsonDocsGenerator.c))._2). cctor_finished_or_no_cctor == 0) {
								pCVar4 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
							}
							pIVar1 = (object)pCVar4.__9;
							__this_01 = new Func<string, bool>(pIVar1, (intptr_t) MethodInfo_CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_c_NormalizeDescription_b__6_1);
							pCVar4 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
							pCVar4.__9__6_1 = __this_01;
						}
						source_00 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
						pSVar3 = (String[])Enumerable.ToArray<string>(source_00);
						if (pSVar3 != null) {
							if (pSVar3.Length != 0) {
								pSVar5 = String.Join(" ", pSVar3);
								return pSVar5;
							}
							goto label_05b92c22;
						}
					}
					goto label_05b92c4b;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003D32")]
	[Address(RVA = "0x5A92C50", Offset = "0x5A91C50", VA = "0x5A92C50")]
	private List<string> ExtractTypeParameters(CLType clType)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$ExtractTypeParameters): 1 lines keep C-only constructs
		String[] source;
		List<string> pSVar1;

		if (clType == null) {
			throw new NullReferenceException();
		}
		source = clType._TypeParameters_k__BackingField;
		if ((source == null) || (source.Length == 0)) {
			pSVar1 = new List<string>();
			return pSVar1;
		}
		pSVar1 = (List<string>)Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
		return pSVar1;
	}

	[Token(Token = "0x6003D33")]
	[Address(RVA = "0x5A925A0", Offset = "0x5A915A0", VA = "0x5A925A0")]
	private ClassDefinition ConvertToClassDefinition(CLType clType)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$ConvertToClassDefinition): 6 lines keep C-only constructs
		XmlInfo pCVar1;
		List<string> pSVar2;
		String* ppSVar3;
		CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition __this_00;
		String pSVar4;
		List<CustomLogicVSCExtensionJsonDocsGenerator.Field> pSVar5;
		List<CustomLogicVSCExtensionJsonDocsGenerator.Method> pSVar6;
		List<CustomLogicVSCExtensionJsonDocsGenerator.Constructor> pSVar7;
		List<string> pSVar8;
		MethodInfo* __this_01;
		CustomLogicVSCExtensionJsonDocsGenerator __this_02;

		__this_01 = (MethodInfo*)this;
		if (Il2CppMethodInitialized_0754740f == false) {
			__this_01 = &MethodInfo_System_Collections_Generic_List_string_get_Count;
			Il2CppMethodInitialized_0754740f = true;
		}
		pSVar2 = __this_01.ExtractTypeParameters(clType);
		if (clType != null) {
			if (clType._IsComponent_k__BackingField == false) {
				if (clType._IsStatic_k__BackingField == false) {
					ppSVar3 = &"class";
				}
				else {
					ppSVar3 = &"extension";
				}
			}
			else {
				ppSVar3 = &"component";
			}
			pSVar4 = *ppSVar3;
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVSCExtensionJsonDocsGenerator.ClassDefinition));
			__this_00 = new Object();
			if (__this_00 != null) {
				__this_00._Kind_k__BackingField = pSVar4;
				__this_02 = (CustomLogicVSCExtensionJsonDocsGenerator)&__this_00._Name_k__BackingField;
				__this_00._Name_k__BackingField = clType._Name_k__BackingField;
				pCVar1 = clType._Info_k__BackingField;
				if (pCVar1 == null) {
					pSVar4 = null;
				}
				else {
					pSVar4 = pCVar1._Summary_k__BackingField;
				}
				if (this != null) {
					pSVar4 = __this_02.NormalizeDescription(pSVar4);
					__this_00._Description_k__BackingField = pSVar4;
					if (pSVar2 != null) {
						pSVar8 = null;
						if (0 < pSVar2._size) {
							pSVar8 = pSVar2;
						}
						__this_00._TypeParameters_k__BackingField = pSVar8;
						__this_00._Deprecated_k__BackingField = clType._ObsoleteMessage_k__BackingField;
						pSVar5 = this.ConvertFields(clType._StaticProperties_k__BackingField);
						__this_00._StaticFields_k__BackingField = pSVar5;
						pSVar6 = this.ConvertMethods(clType._StaticMethods_k__BackingField);
						__this_00._StaticMethods_k__BackingField = pSVar6;
						pSVar5 = this.ConvertFields(clType._InstanceProperties_k__BackingField);
						__this_00._InstanceFields_k__BackingField = pSVar5;
						pSVar6 = this.ConvertMethods(clType._InstanceMethods_k__BackingField);
						__this_00._InstanceMethods_k__BackingField = pSVar6;
						pSVar7 = this.ConvertConstructors(clType._Constructors_k__BackingField);
						__this_00._Constructors_k__BackingField = pSVar7;
						return __this_00;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D34")]
	[Address(RVA = "0x5A92CF0", Offset = "0x5A91CF0", VA = "0x5A92CF0")]
	private List<Field> ConvertFields(CLProperty[] properties)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$ConvertFields): 6 lines keep C-only constructs
		Func<CLProperty, CustomLogicVSCExtensionJsonDocsGenerator.Field> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		List<CustomLogicVSCExtensionJsonDocsGenerator.Field> pSVar1;

		if ((properties == null) || (properties.Length == 0)) {
			pSVar1 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<CustomLogicVSCExtensionJsonDocsGenerator.Field>));
			pSVar1 = new List<object>() ;
			return pSVar1;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CLProperty, CustomLogicVSCExtensionJsonDocsGenerator.Field>));
		__this_00 = new Func<object, object>((object)this, (intptr_t) MethodInfo_CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_ConvertFields_b__9_0);
		source = Enumerable.Select<CLProperty, CustomLogicVSCExtensionJsonDocsGenerator.Field>((System_Collections_Generic_IEnumerable_TSource__o)properties, (System_Func_TSource__TResult__o)__this_00);
		pSVar1 = (List<CustomLogicVSCExtensionJsonDocsGenerator.Field>)Enumerable.ToList<CustomLogicVSCExtensionJsonDocsGenerator.Field>((System_Collections_Generic_IEnumerable_TSource__o)source) ;
		return pSVar1;
	}

	[Token(Token = "0x6003D35")]
	[Address(RVA = "0x5A92DF0", Offset = "0x5A91DF0", VA = "0x5A92DF0")]
	private List<Method> ConvertMethods(CLMethod[] methods)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$ConvertMethods): 10 lines keep C-only constructs
		object @object;
		CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator___c_StaticFields pCVar1;
		Func<CLMethod, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source;
		Func<CLMethod, CustomLogicVSCExtensionJsonDocsGenerator.Method> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		List<CustomLogicVSCExtensionJsonDocsGenerator.Method> pSVar2;

		if (Il2CppMethodInitialized_07547411 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_ConvertMethods_b__10_1) ;
			Il2CppMethodInitialized_07547411 = true;
		}
		if ((methods == null) || (methods.Length == 0)) {
			pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<CustomLogicVSCExtensionJsonDocsGenerator.Method>));
			pSVar2 = new List<@object>();
			return pSVar2;
		}
		if ((typeof(CustomLogicVSCExtensionJsonDocsGenerator.c)._2).cctor_finished_or_no_cctor == 0) {
			pCVar1 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
			__this_00 = pCVar1.__9__10_0;
		}
		else {
			pCVar1 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
			__this_00 = pCVar1.__9__10_0;
		}
		if (__this_00 == null) {
			if (((typeof(CustomLogicVSCExtensionJsonDocsGenerator.c))._2). cctor_finished_or_no_cctor == 0) {
				pCVar1 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
			}
			@object = (object)pCVar1.__9;
			__this_00 = new Func<CLMethod, bool>(@object, (intptr_t) MethodInfo_CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_c_ConvertMethods_b__10_0);
			pCVar1 = typeof(CustomLogicVSCExtensionJsonDocsGenerator.c).static_fields;
			pCVar1.__9__10_0 = __this_00;
		}
		source = Enumerable.Where<CLMethod>((System_Collections_Generic_IEnumerable_TSource__o)methods, (System_Func_TSource__bool__o)__this_00);
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CLMethod, CustomLogicVSCExtensionJsonDocsGenerator.Method>));
		__this_01 = new Func<@object, @object>((object)this, (intptr_t) MethodInfo_CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_ConvertMethods_b__10_1);
		source_00 = Enumerable.Select<CLMethod, CustomLogicVSCExtensionJsonDocsGenerator.Method>(source, (System_Func_TSource__TResult__o)__this_01);
		pSVar2 = (List<CustomLogicVSCExtensionJsonDocsGenerator.Method>)Enumerable.ToList<CustomLogicVSCExtensionJsonDocsGenerator.Method>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		return pSVar2;
	}

	[Token(Token = "0x6003D36")]
	[Address(RVA = "0x5A92FE0", Offset = "0x5A91FE0", VA = "0x5A92FE0")]
	private List<Constructor> ConvertConstructors(CLConstructor[] constructors)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$ConvertConstructors): 8 lines keep C-only constructs
		Func<CLConstructor, CustomLogicVSCExtensionJsonDocsGenerator.Constructor> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		List<CustomLogicVSCExtensionJsonDocsGenerator.Constructor> pSVar1;

		if (Il2CppMethodInitialized_07547412 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_CustomLogicVSCExtensionJsonDocsGenerator_Constructor) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<CustomLogicVSCExtensionJsonDocsGenerator.Constructor>)) ;
			Il2CppMethodInitialized_07547412 = true;
		}
		if ((constructors == null) ||(constructors.Length == 0)) {
			pSVar1 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<CustomLogicVSCExtensionJsonDocsGenerator.Constructor>));
			pSVar1 = new List<object>();
			return pSVar1;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CLConstructor, CustomLogicVSCExtensionJsonDocsGenerator.Constructor>));
		__this_00 = new Func<object, object>((object)this, (intptr_t) MethodInfo_CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_ConvertConstructors_b__11_0);
		source = Enumerable.Select<CLConstructor, CustomLogicVSCExtensionJsonDocsGenerator.Constructor>((System_Collections_Generic_IEnumerable_TSource__o)constructors, (System_Func_TSource__TResult__o)__this_00);
		pSVar1 = (List<CustomLogicVSCExtensionJsonDocsGenerator.Constructor>)Enumerable.ToList<CustomLogicVSCExtensionJsonDocsGenerator.Constructor>((System_Collections_Generic_IEnumerable_TSource__o)source);
		return pSVar1;
	}

	[Token(Token = "0x6003D37")]
	[Address(RVA = "0x5A930E0", Offset = "0x5A920E0", VA = "0x5A930E0")]
	private List<Parameter> ConvertParameters(CLParameter[] parameters)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$ConvertParameters): 6 lines keep C-only constructs
		Func<CLParameter, CustomLogicVSCExtensionJsonDocsGenerator.Parameter> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		List<CustomLogicVSCExtensionJsonDocsGenerator.Parameter> pSVar1;

		if ((parameters == null) || (parameters.Length == 0)) {
			pSVar1 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<CustomLogicVSCExtensionJsonDocsGenerator.Parameter>));
			pSVar1 = new List<object>();
			return pSVar1;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CLParameter, CustomLogicVSCExtensionJsonDocsGenerator.Parameter>));
		__this_00 = new Func<object, object>((object)this, (intptr_t) MethodInfo_CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_ConvertParameters_b__12_0);
		source = Enumerable.Select<CLParameter, CustomLogicVSCExtensionJsonDocsGenerator.Parameter>((System_Collections_Generic_IEnumerable_TSource__o)parameters, (System_Func_TSource__TResult__o)__this_00);
		pSVar1 = (List<CustomLogicVSCExtensionJsonDocsGenerator.Parameter>)Enumerable.ToList<CustomLogicVSCExtensionJsonDocsGenerator.Parameter>((System_Collections_Generic_IEnumerable_TSource__o)source);
		return pSVar1;
	}

	[Token(Token = "0x6003D38")]
	[Address(RVA = "0x5A931E0", Offset = "0x5A921E0", VA = "0x5A931E0")]
	private JsonTypeReference ConvertTypeReference(TypeReference typeRef)
	{
		// Lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c (CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$ConvertTypeReference): 17 lines keep C-only constructs
		CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference targetAddress;
		TypeReference[] source;
		bool bVar1;
		CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference __this_00;
		List<CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference> pSVar2;
		Func<TypeReference, CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		object pIVar3;
		List<CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference>* targetAddress_00;
		String a;

		if (Il2CppMethodInitialized_07547414 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<TypeReference, CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference>)) ;
			Il2CppMethodInitialized_07547414 = true;
		}
		if (typeRef == null) {
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference));
			__this_00 = new Object();
			if (__this_00 != null) {
				__this_00._Name_k__BackingField = "void";
				pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference>));
				pSVar2 = new List<object>();
				targetAddress_00 = &__this_00._TypeArguments_k__BackingField;
				__this_00._TypeArguments_k__BackingField = pSVar2;
	label_05b9350b: ;
				return __this_00;
			}
		}
		else {
			a = typeRef.Name;
			bVar1 = (a == "null");
			if ((bVar1) || (bVar1 = (a == "Void"))) {
				a = "void";
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference));
			__this_00 = new Object();
			if (__this_00 != null) {
				targetAddress = &__this_00.fields;
				__this_00._Name_k__BackingField = a;
				pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference>));
				pSVar2 = new List<object>();
				targetAddress_00 = &__this_00._TypeArguments_k__BackingField;
				__this_00._TypeArguments_k__BackingField = pSVar2;
				bVar1 = (a == "BuiltinClassInstance");
				if (bVar1) {
					targetAddress._Name_k__BackingField = "Object";
				}
				source = typeRef.Arguments;
				if (source == null) {
					return __this_00;
				}
				if (source.Length == 0) {
					return __this_00;
				}
				__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<TypeReference, CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference>));
				__this_01 = new Func<object, object>((object)this, (intptr_t) MethodInfo_CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_ConvertTypeReference);
				source_00 = Enumerable.Select<TypeReference, CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_01);
				pSVar2 = (List<CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference>)Enumerable.ToList<CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
				*targetAddress_00 = pSVar2;
				bVar1 = (a == "Object");
				if (bVar1) {
					pSVar2 = *targetAddress_00;
					if (pSVar2 == null) goto label_05b93551;
				}
				else {
					bVar1 = (a == "BuiltinClassInstance");
					if (!bVar1) {
						return __this_00;
					}
					pSVar2 = *targetAddress_00;
					if (pSVar2 == null) goto label_05b93551;
					if (pSVar2._size != 1) {
						return __this_00;
					}
				}
				pIVar3 = pSVar2.get_Item(0);
				if (pIVar3 != null) {
					if ((pIVar3[1].monitor != null) && (*(int)((long)pIVar3[1].monitor + 0x18) != 0)) {
						return __this_00;
					}
					targetAddress._Name_k__BackingField = (String)pIVar3[1].klass;
					pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference>));
					pSVar2 = new List<object>();
					*targetAddress_00 = pSVar2;
					goto label_05b9350b;
				}
			}
		}
	label_05b93551: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/Editor/CustomLogicVSCExtensionJsonDocsGenerator.c.

	// CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$<ConvertFields>b__9_0: 2 lines keep C-only constructs
	private CustomLogicVSCExtensionJsonDocsGenerator.Field ConvertFields_b__9_0(CLProperty p)
	{
		XmlInfo pCVar1;
		String[] pSVar2;
		bool bVar3;
		String pSVar4;
		String str2;
		CustomLogicVSCExtensionJsonDocsGenerator.Field __this_00;
		CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference pCVar5;
		String* __this_01;

		__this_01 = (String*)this;
		if (Il2CppMethodInitialized_07547415 == false) {
			__this_01 = &"Refer to ";
			Il2CppMethodInitialized_07547415 = true;
		}
		if (p != null) {
			pCVar1 = p._Info_k__BackingField;
			if (pCVar1 == null) {
				pSVar4 = null;
			}
			else {
				pSVar4 = pCVar1._Summary_k__BackingField;
			}
			if (this != null) {
				pSVar4 = __this_01.NormalizeDescription(pSVar4);
				pSVar2 = p._EnumNames_k__BackingField;
				if ((pSVar2 != null) && (pSVar2.Length != 0)) {
					bVar3 = String.IsNullOrEmpty(pSVar4);
					if (!bVar3) {
						pSVar4 = String.Concat(pSVar4, " ");
					}
					pSVar2 = p._EnumNames_k__BackingField;
					if (pSVar2 == null) goto label_05b936fe;
					if ((int)pSVar2.Length == 1) {
						str2 = pSVar2[0];
					}
					else {
						str2 = String.Join(", ", pSVar2);
					}
					pSVar4 = String.Concat(pSVar4, "Refer to ", str2);
				}
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVSCExtensionJsonDocsGenerator.Field));
				__this_00 = new Object();
				if (__this_00 != null) {
					__this_00._Label_k__BackingField = p._Name_k__BackingField;
					pCVar5 = this.ConvertTypeReference(p._Type_k__BackingField);
					__this_00._Type_k__BackingField = pCVar5;
					__this_00._Description_k__BackingField = pSVar4;
					__this_00._Readonly_k__BackingField = p._IsReadonly_k__BackingField;
					__this_00._Private_k__BackingField = false;
					__this_00._Deprecated_k__BackingField = p._ObsoleteMessage_k__BackingField;
					return __this_00;
				}
			}
		}
	label_05b936fe: ;
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$<ConvertMethods>b__10_1: 2 lines keep C-only constructs
	private CustomLogicVSCExtensionJsonDocsGenerator.Method ConvertMethods_b__10_1(CLMethod m)
	{
		XmlInfo pCVar1;
		CustomLogicVSCExtensionJsonDocsGenerator.Method __this_00;
		CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference pCVar2;
		String pSVar3;
		List<CustomLogicVSCExtensionJsonDocsGenerator.Parameter> pSVar4;
		CustomLogicVSCExtensionJsonDocsGenerator __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVSCExtensionJsonDocsGenerator.Method));
		__this_00 = new Object();
		if ((m != null) &&(__this_00 != null)) {
			__this_00._Label_k__BackingField = m._Name_k__BackingField;
			pCVar2 = this.ConvertTypeReference(m._ReturnType_k__BackingField);
			__this_01 = (CustomLogicVSCExtensionJsonDocsGenerator)&__this_00._ReturnType_k__BackingField;
			__this_00._ReturnType_k__BackingField = pCVar2;
			pCVar1 = m._Info_k__BackingField;
			if (pCVar1 == null) {
				pSVar3 = null;
			}
			else {
				pSVar3 = pCVar1._Summary_k__BackingField;
			}
			if (this != null) {
				pSVar3 = __this_01.NormalizeDescription(pSVar3);
				__this_00._Description_k__BackingField = pSVar3;
				pSVar4 = this.ConvertParameters(m._Parameters_k__BackingField);
				__this_00._Parameters_k__BackingField = pSVar4;
				__this_00._Kind_k__BackingField = "function";
				__this_00._Deprecated_k__BackingField = m._ObsoleteMessage_k__BackingField;
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$<ConvertConstructors>b__11_0: 2 lines keep C-only constructs
	private CustomLogicVSCExtensionJsonDocsGenerator.Constructor ConvertConstructors_b__11_0(CLConstructor c)
	{
		XmlInfo pCVar1;
		CustomLogicVSCExtensionJsonDocsGenerator.Constructor __this_00;
		List<CustomLogicVSCExtensionJsonDocsGenerator.Parameter> pSVar2;
		String pSVar3;
		CustomLogicVSCExtensionJsonDocsGenerator __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVSCExtensionJsonDocsGenerator.Constructor));
		__this_00 = new Object();
		if ((c != null) &&(pSVar2 = this.ConvertParameters(c._Parameters_k__BackingField), __this_00 != null)) {
			__this_01 = (CustomLogicVSCExtensionJsonDocsGenerator)&__this_00.fields;
			__this_00._Parameters_k__BackingField = pSVar2;
			pCVar1 = c._Info_k__BackingField;
			if (pCVar1 == null) {
				pSVar3 = null;
			}
			else {
				pSVar3 = pCVar1._Summary_k__BackingField;
			}
			if (this != null) {
				pSVar3 = __this_01.NormalizeDescription(pSVar3);
				__this_00._Description_k__BackingField = pSVar3;
				__this_00._Deprecated_k__BackingField = c._ObsoleteMessage_k__BackingField;
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator$$<ConvertParameters>b__12_0: 2 lines keep C-only constructs
	private CustomLogicVSCExtensionJsonDocsGenerator.Parameter ConvertParameters_b__12_0(CLParameter p)
	{
		String[] pSVar1;
		bool bVar2;
		String value;
		String str2;
		CustomLogicVSCExtensionJsonDocsGenerator.Parameter __this_00;
		CustomLogicVSCExtensionJsonDocsGenerator.JsonTypeReference pCVar3;
		String* __this_01;

		__this_01 = (String*)this;
		if (Il2CppMethodInitialized_07547418 == false) {
			__this_01 = &"Refer to ";
			Il2CppMethodInitialized_07547418 = true;
		}
		if (p != null) {
			value = __this_01.NormalizeDescription(p._Description_k__BackingField);
			pSVar1 = p._EnumNames_k__BackingField;
			if ((pSVar1 != null) && (pSVar1.Length != 0)) {
				bVar2 = String.IsNullOrEmpty(value);
				if (!bVar2) {
					value = String.Concat(value, " ");
				}
				pSVar1 = p._EnumNames_k__BackingField;
				if (pSVar1 == null) goto label_05b93a83;
				if ((int)pSVar1.Length == 1) {
					str2 = pSVar1[0];
				}
				else {
					str2 = String.Join(", ", pSVar1);
				}
				value = String.Concat(value, "Refer to ", str2);
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicVSCExtensionJsonDocsGenerator.Parameter));
			__this_00 = new Object();
			if (__this_00 != null) {
				__this_00._Name_k__BackingField = p._Name_k__BackingField;
				pCVar3 = this.ConvertTypeReference(p._Type_k__BackingField);
				__this_00._Type_k__BackingField = pCVar3;
				__this_00._Description_k__BackingField = value;
				__this_00._IsOptional_k__BackingField = p._IsOptional_k__BackingField;
				__this_00._IsVariadic_k__BackingField = p._IsVariadic_k__BackingField;
				return __this_00;
			}
		}
	label_05b93a83: ;
		throw new NullReferenceException();
	}

	// CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicVSCExtensionJsonDocsGenerator.c();
		CustomLogicVSCExtensionJsonDocsGenerator.c.__9 =(CustomLogicVSCExtensionJsonDocsGenerator.c)__this;
		return;
	}

	// CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.<>c$$<NormalizeDescription>b__6_0: clean
	private String c__NormalizeDescription_b__6_0(String line)
	{
		String pSVar1;

		if (line == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	// CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.<>c$$<NormalizeDescription>b__6_1: clean
	private bool c__NormalizeDescription_b__6_1(String line)
	{
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(line);
		return !bVar1;
	}

	// CustomLogic.Editor.CustomLogicVSCExtensionJsonDocsGenerator.<>c$$<ConvertMethods>b__10_0: clean
	private bool c__ConvertMethods_b__10_0(CLMethod m)
	{
		String __this_00;
		bool bVar1;

		if ((m == null) ||(__this_00 = m._Name_k__BackingField, __this_00 == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.StartsWith("__");
		return !bVar1;
	}
}
