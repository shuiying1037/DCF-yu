		const char* p = bucket[index].bit_array,* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array, * p3 = bucket[index+3].bit_array, * p4 = bucket[index+4].bit_array;
		uint64_t bits = *(uint64_t*)p;
		uint64_t bits1 = *(uint64_t*)p1;
		uint64_t bits2 = *(uint64_t*)p2;
		uint64_t bits3 = *(uint64_t*)p3;
		uint64_t bits4 = *(uint64_t*)p4;
		
		hasvalue4(bits1, fingerprint);
		hasvalue4(bits2, fingerprint);
		hasvalue4(bits3, fingerprint);
		hasvalue4(bits4, fingerprint);
		return hasvalue4(bits, fingerprint);
	}else if(fingerprint_size == 8){
		const char* p = bucket[index].bit_array,* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array, * p3 = bucket[index+3].bit_array, * p4 = bucket[index+4].bit_array;
		uint64_t bits = *(uint64_t*)p;
		uint64_t bits1 = *(uint64_t*)p1;
		uint64_t bits2 = *(uint64_t*)p2;
		uint64_t bits3 = *(uint64_t*)p3;
		uint64_t bits4 = *(uint64_t*)p4;
		
		hasvalue4(bits1, fingerprint);
		hasvalue4(bits2, fingerprint);
		hasvalue4(bits3, fingerprint);
		hasvalue4(bits4, fingerprint);
		return hasvalue8(bits, fingerprint);
	}else if(fingerprint_size == 12){
		const char* p = bucket[index].bit_array,* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array, * p3 = bucket[index+3].bit_array, * p4 = bucket[index+4].bit_array;
		uint64_t bits = *(uint64_t*)p;
		uint64_t bits1 = *(uint64_t*)p1;
		uint64_t bits2 = *(uint64_t*)p2;
		uint64_t bits3 = *(uint64_t*)p3;
		uint64_t bits4 = *(uint64_t*)p4;
		
		hasvalue4(bits1, fingerprint);
		hasvalue4(bits2, fingerprint);
		hasvalue4(bits3, fingerprint);
		hasvalue4(bits4, fingerprint);
		return hasvalue12(bits, fingerprint);
//		return hasvalue12(bits, fingerprint)|hasvalue12(bits1, fingerprint)|hasvalue12(bits2, fingerprint)|hasvalue12(bits3, fingerprint);
	}else if(fingerprint_size == 16){
		const char* p = bucket[index].bit_array,* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array, * p3 = bucket[index+3].bit_array, * p4 = bucket[index+4].bit_array;
		uint64_t bits = *(uint64_t*)p;
		uint64_t bits1 = *(uint64_t*)p1;
		uint64_t bits2 = *(uint64_t*)p2;
		uint64_t bits3 = *(uint64_t*)p3;
		uint64_t bits4 = *(uint64_t*)p4;
		
		hasvalue4(bits1, fingerprint);
		hasvalue4(bits2, fingerprint);
		hasvalue4(bits3, fingerprint);
		hasvalue4(bits4, fingerprint);
		return hasvalue16(bits, fingerprint);


			const char* p = bucket[index].bit_array;
		uint64_t bits = *(uint64_t*)p;
		return hasvalue4(bits, fingerprint);
	}else if(fingerprint_size == 8){
		const char* p = bucket[index].bit_array;
		uint64_t bits = *(uint64_t*)p;
		return hasvalue8(bits, fingerprint);
	}else if(fingerprint_size == 12){
		const char* p = bucket[index].bit_array;
		uint64_t bits = *(uint64_t*)p;
		return hasvalue12(bits, fingerprint);
//		return hasvalue12(bits, fingerprint)|hasvalue12(bits1, fingerprint)|hasvalue12(bits2, fingerprint)|hasvalue12(bits3, fingerprint);
	}else if(fingerprint_size == 16){
		const char* p = bucket[index].bit_array;
		uint64_t bits = *(uint64_t*)p;
		return hasvalue16(bits, fingerprint);








		const char* p = bucket[index].bit_array,* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array, * p3 = bucket[index+3].bit_array;
		uint64_t bits = *(uint64_t*)p;
		uint64_t bits1 = *(uint64_t*)p1;
		uint64_t bits2 = *(uint64_t*)p2;
		uint64_t bits3 = *(uint64_t*)p3;
	
		hasvalue4(bits1, fingerprint);
		hasvalue4(bits2, fingerprint);
		hasvalue4(bits3, fingerprint);
	
		return hasvalue4(bits, fingerprint);
	}else if(fingerprint_size == 8){
		const char* p = bucket[index].bit_array,* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array, * p3 = bucket[index+3].bit_array;
		uint64_t bits = *(uint64_t*)p;
		uint64_t bits1 = *(uint64_t*)p1;
		uint64_t bits2 = *(uint64_t*)p2;
		uint64_t bits3 = *(uint64_t*)p3;
		
		hasvalue8(bits1, fingerprint);
		hasvalue8(bits2, fingerprint);
		hasvalue8(bits3, fingerprint);
		return hasvalue8(bits, fingerprint);
	}else if(fingerprint_size == 12){
		const char* p = bucket[index].bit_array,* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array, * p3 = bucket[index+3].bit_array;
		uint64_t bits = *(uint64_t*)p;
		uint64_t bits1 = *(uint64_t*)p1;
		uint64_t bits2 = *(uint64_t*)p2;
		uint64_t bits3 = *(uint64_t*)p3;
	
		hasvalue12(bits1, fingerprint);
		hasvalue12(bits2, fingerprint);
		hasvalue12(bits3, fingerprint);
		return hasvalue12(bits, fingerprint);
//		return hasvalue12(bits, fingerprint)|hasvalue12(bits1, fingerprint)|hasvalue12(bits2, fingerprint)|hasvalue12(bits3, fingerprint);
	}else if(fingerprint_size == 16){
		const char* p = bucket[index].bit_array,* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array, * p3 = bucket[index+3].bit_array;
		uint64_t bits = *(uint64_t*)p;
		uint64_t bits1 = *(uint64_t*)p1;
		uint64_t bits2 = *(uint64_t*)p2;
		uint64_t bits3 = *(uint64_t*)p3;
//		uint64_t bits4 = *(uint64_t*)p4;
		
		hasvalue16(bits1, fingerprint);
		hasvalue16(bits2, fingerprint);
		hasvalue16(bits3, fingerprint);
//		hasvalue16(bits4, fingerprint);
		return hasvalue16(bits, fingerprint);



		const char* p = bucket[index].bit_array;
		uint64_t bits = *(uint64_t*)p;
		if(index < single_table_length-2){
			const char* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array;
			uint64_t bits1 = *(uint64_t*)p1;
		    uint64_t bits2 = *(uint64_t*)p2;
			hasvalue4(bits1, fingerprint);
			hasvalue4(bits2, fingerprint);
		}		
		return hasvalue4(bits, fingerprint);
	}else if(fingerprint_size == 8){
		const char* p = bucket[index].bit_array;
		uint64_t bits = *(uint64_t*)p;
		if(index < single_table_length-2){
			const char* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array;
			uint64_t bits1 = *(uint64_t*)p1;
		    uint64_t bits2 = *(uint64_t*)p2;
			hasvalue8(bits1, fingerprint);
			hasvalue8(bits2, fingerprint);
		}
		return hasvalue8(bits, fingerprint);
	}else if(fingerprint_size == 12){
		const char* p = bucket[index].bit_array;
		uint64_t bits = *(uint64_t*)p;
		if(index < single_table_length-5){
			const char* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array;
			uint64_t bits1 = *(uint64_t*)p1;
		    uint64_t bits2 = *(uint64_t*)p2;
			hasvalue12(bits1, fingerprint);
			hasvalue12(bits2, fingerprint);
		}
		return hasvalue12(bits, fingerprint);
//		return hasvalue12(bits, fingerprint)|hasvalue12(bits1, fingerprint)|hasvalue12(bits2, fingerprint)|hasvalue12(bits3, fingerprint);
	}else if(fingerprint_size == 16){
		const char* p = bucket[index].bit_array;
		uint64_t bits = *(uint64_t*)p;
		if(index < single_table_length-2){
			const char* p1 = bucket[index+1].bit_array, * p2 = bucket[index+2].bit_array;
			uint64_t bits1 = *(uint64_t*)p1;
		    uint64_t bits2 = *(uint64_t*)p2;
			hasvalue16(bits1, fingerprint);
			hasvalue16(bits2, fingerprint);
		}
		return hasvalue16(bits, fingerprint);
